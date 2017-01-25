#include "StringList.h"

StringList::StringList()
{
    head = new StringNode("THIS IS THE HEAD SENTINEL NODE", NULL, NULL);
    tail = new StringNode("THIS IS THE TAIL SENTINEL NODE", NULL, head);
    head->next = tail;

    curr = tail;

    size = 0;
    currIndex = 0;
}

StringList::~StringList()
{
    StringNode *node = head;
    while(node != NULL)
    {
        head = node;
        node = node->next;
        delete head;
    }
    head = NULL;
    tail = NULL;
}

bool StringList::isEmpty()
{
    if(size == 0)
    {
        return true;
    }
    return false;
}

void StringList::checkEmpty()
{
    if(isEmpty())
    {
        throw EmptyException();
    }
}

void StringList::insert(const string& item)
{
    StringNode *node = new StringNode(item, curr, curr->prev);

    curr->prev->next = node;
    curr->prev = node;

    size++;
    currIndex++;
}

ostream& operator <<(ostream& outs, const StringList& lis)
{
    StringNode *node = lis.head->next;
    while(node->next != NULL)
    {
        outs << node->data;
        if(node->next != NULL)
        {
            outs << " ";
        }
        node = node->next;
    }
    return outs;
}

const string& StringList::get_value() const
{
    if(curr == tail)
    {
        throw InvalidPositionException();
    }
    else
    {
        return curr->data;
    }
}

int StringList::curr_pos() const
{
    return currIndex;
}

void StringList::prev()
{
    if(curr->prev != head)
    {
        curr = curr->prev;
        currIndex--;
    }
    else
    {
        throw InvalidPositionException();
    }

}

void StringList::next()
{
    if(curr->next != tail)
    {
        curr = curr->next;
        currIndex++;
    }
    else
    {
        throw InvalidPositionException();
    }
}

string StringList::remove()
{
    if(curr != tail)
    {
        StringNode *node = curr;

        curr->prev->next = curr->next;
        curr->next->prev = curr->prev;
        curr = curr->next;
        string dataReturn = node->data;
        delete node;

        size--;

        return dataReturn;
    }
    else
    {
        throw InvalidPositionException();
    }
}

int StringList::length() const
{
    return size;
}

void StringList::move_to_start()
{
    curr = head->next;
}

void StringList::move_to_end()
{
    curr = tail;
}

void StringList::move_to_pos(int pos)
{
    if(pos >= 0 || pos <= size)
    {
        move_to_start();

        for(int i = 0; i < pos; i++)
        {
            curr = curr->next;
        }
    }
    else
    {
        throw InvalidPositionException();
    }
}

void StringList::append(const string& item)
{
    int returnCurrTo = curr_pos();

    move_to_end();

    insert(item);

    move_to_pos(returnCurrTo);

    size++;
}

void StringList::clear()
{
    move_to_start();
    while(tail->prev != head)
    {
        remove();
    }
}
