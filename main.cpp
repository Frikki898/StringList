#include <iostream>
#include "StringList.h"

using namespace std;

int main()
{
    StringList nodeList;


    nodeList.insert("1");
    cout << "list: " << nodeList << endl;
    nodeList.insert("2");
    cout << "list: " << nodeList << endl;
    nodeList.insert("3");
    cout << "list: " << nodeList << endl;
    nodeList.insert("4");
    cout << "list: " << nodeList << endl;
    nodeList.insert("5");
    cout << "list: " << nodeList << endl;
    nodeList.insert("6");
    cout << "list: " << nodeList << endl;
    cout << nodeList.curr_pos();
    cout << " ";
    cout << nodeList.get_value();
    nodeList.next();
    cout << endl;
    cout << nodeList.curr_pos();
    cout << " ";
    cout << nodeList.get_value();
    nodeList.next();
    cout << endl;
    cout << nodeList.curr_pos();
    cout << " ";
    cout << nodeList.get_value();
    nodeList.next();
    cout << endl;
    cout << nodeList.curr_pos();
    cout << " ";
    cout << nodeList.get_value();
    nodeList.next();
    cout << endl;
	cout << nodeList.curr_pos();
    cout << " ";
    cout << nodeList.get_value();
    nodeList.next();
    cout << endl;
    cout << nodeList.curr_pos();
    cout << " ";
    cout << nodeList.get_value();
    nodeList.next();
    cout << endl;
	cout << nodeList.curr_pos();
    cout << " ";
    nodeList.next();
    cout << endl;

	/*
    //throws cause curr is tail sentinel
    //cout << "getting value from curr: " << nodeList.get_value() << endl;

    cout << "moving curr previous" << endl;
    nodeList.prev();

    cout << "inserting 99 to list" << endl;
    nodeList.insert("99");
    cout << "list: " << nodeList << endl;

    cout << "display curr pos: " << nodeList.curr_pos() << endl;

    cout << "moving curr previous" << endl;
    nodeList.prev();

    cout << "getting value from curr: " << nodeList.get_value() << endl;

    cout << "list: " << nodeList << endl;
    cout << nodeList.length() << endl;

    nodeList.remove();
    cout << "list: " << nodeList << endl;
    cout << nodeList.length() << endl;

    cout << "moving curr to start of list" << endl;
    nodeList.move_to_start();

    cout << "insertin 42 to list" << endl;
    nodeList.insert("42");
    cout << "list: " << nodeList << endl;

    cout << "moving curr back by one" << endl;
    nodeList.prev();
    cout << "removing first data from the list which is: " << nodeList.remove() << endl;

    cout << "insertin 42 again to list" << endl;
    nodeList.insert("42");
    cout << "list: " << nodeList << endl;

    cout << "moving curr to end of list" << endl;
    nodeList.move_to_end();

    cout << "insertin 69 to list" << endl;
    nodeList.insert("69");
    cout << "list: " << nodeList << endl;

    nodeList.move_to_pos(8);

    cout << "insertin 112 to list" << endl;
    nodeList.insert("112");
    cout << "list: " << nodeList << endl;

    cout << "moving curr to prev to test" << endl;
    nodeList.prev();

    cout << "appending" << endl;
    nodeList.append("991");
    cout << "list: " << nodeList << endl;

    nodeList.move_to_start();
    nodeList.remove();
    cout << "list: " << nodeList << endl;
    nodeList.remove();
    cout << "list: " << nodeList << endl;
    nodeList.remove();
    cout << "list: " << nodeList << endl;
    nodeList.remove();
    cout << "list: " << nodeList << endl;

    nodeList.clear();
    cout << "list: " << nodeList << endl;
	*/

	cout << endl << endl;
    nodeList.append("ezyp");
    nodeList.append("asdf");
    cout << nodeList << endl;



    return 0;
}
