/*
 * Lists.cpp
 *
 *  Created on: Feb 19, 2021
 *      Author: Joe
 *
 *      Operations:

splice - Transfer elements from list to list (public member function )

remove - Remove elements with specific value (public member function )

remove_if - Remove elements fulfilling condition (public member function template )

unique - Remove duplicate values (public member function )

merge - Merge sorted lists (public member function )

sort - Sort elements in container (public member function )

reverse - Reverse the order of elements (public member function )
 *
 *
 *
 */

#include<list>
#include<iostream>

using namespace std;

int main()
{

	list<signed short int> iList;
    list<signed short int>::iterator iListIterator;

	iList.push_back(7);
	iList.push_back(10);
	iList.push_front(37);
	iList.push_front(100);

	cout << endl << "unsorted";
	for(iListIterator = iList.begin();iListIterator != iList.end(); iListIterator++)
	{

		cout << endl << *iListIterator;

	}

	iList.sort();

	cout << endl << "sorted";

	for(iListIterator = iList.begin();iListIterator != iList.end(); iListIterator++)
	{

		cout << endl << *iListIterator;

	}

	iList.reverse();

	cout << endl "reverse sorted";
	for(iListIterator = iList.begin();iListIterator != iList.end(); iListIterator++)
	{

		cout << endl << *iListIterator;

	}

	iList.push_front(7);

	iList.unique();

	cout << endl << "unique";
	for(iListIterator = iList.begin();iListIterator != iList.end(); iListIterator++)
	{

		cout << endl << *iListIterator;

	}



}

