/**
*	@author
*	@date
*	@file main.cpp
*	@brief driver for LinkedList demo
*/
#include <iostream>
#include "LinkedListOfInts.h"
#include "codeTest.h"

int main(int argc, char** argv)
{
	//Example of declaring a LinkedListOfInts
	LinkedListOfInts testableList;
	int size=0;
	//You won't do all the tests in main; that's what your Test class will be for
	//Example:
	//TestSuite myTester;
	//myTester.runTests();

	//taking in a size for the list
	while(size < 10)
	{
		std::cout<<"Please input a list size of at least 10: ";
		std::cin>>size;
		std::cout<<'\n';
	}


	codeTest myTest(size);
	myTest.runTests();

	//std::cout << "Running...\nAnd we're done.\nGoodbye.\n";

	return (0);

}
