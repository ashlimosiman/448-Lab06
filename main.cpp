/**
*	@author Ashli Mosiman
*	@date Nov 7, 2016
*	@file main.cpp
*	@brief driver for LinkedList demo
*/
#include <iostream>
#include "LinkedListOfInts.h"
#include "codeTest.h"

int main(int argc, char** argv)
{
	LinkedListOfInts testableList;
	int size=0;

	//taking in a size for the list
	while(size < 10)
	{
		std::cout<<"Please input a list size of at least 10: ";
		std::cin>>size;
		std::cout<<'\n';
	}

	//running the tests
	codeTest myTest(size);
	myTest.runTests();


	return (0);

}
