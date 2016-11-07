/**
 *File: codeTest.h
 *Author: Ashli Mosiman
 *KUID Number: 2819456
 *Date Last Updated: Nov 7, 2016
 *Purpose: Header file for the test class
**/
#ifndef CODE_TEST_H
#define CODE_TEST_H

#include <iostream>
#include <fstream>
#include <vector>
#include "List.h"
#include "LinkedListOfInts.h"
#include "Node.h"

class codeTest
{
     public:
                 /**
                *  @pre None
                *  @post sets all private member variables to their respective zeros
                *  @return None
                **/
               codeTest();
                /**
                *  @pre integer for the size of list made
                *  @post sets all private member variables to their respective zeros and size to the received value
                *  @return None
                **/
               codeTest(int num);
               /**
              *  @pre string of the bug detail
              *  @post writes the bug to a text file
              *  @return None
              **/
               void writeBugs(std::string bug);
               /**
              *  @pre None
              *  @post calls on all tests and prints results
              *  @return None
              **/
               void runTests();
               /**
              *  @pre None
              *  @post test on a new, empty list
              *  @return true if it passed all tests, false otherwise
              **/
               bool test1();
               /**
              *  @pre None
              *  @post checks if removing the front node of an empty list messes up anything
              *  @return true if it passed all tests, false otherwise
              **/
               bool test2();
               /**
              *  @pre None
              *  @post checks if removing the back node of an empty list messes up anything
              *  @return true if it passed all tests, false otherwise
              **/
               bool test3();
               /**
              *  @pre None
              *  @post testing list after adding 1 node to the front
              *  @return true if it passed all tests, false otherwise
              **/
               bool test4();
               /**
              *  @pre None
              *  @post testing list after adding 1 node to the back
              *  @return true if it passed all tests, false otherwise
              **/
               bool test5();
               /**
              *  @pre None
              *  @post testing list after multiple nodes are added to the front of the list
              *  @return true if it passed all tests, false otherwise
              **/
               bool test6();
               /**
              *  @pre None
              *  @post testing list after multiple nodes are added to the back of the list
              *  @return true if it passed all tests, false otherwise
              **/
               bool test7();
               /**
              *  @pre None
              *  @post testing list after removing nodes from the front of the list
              *  @return true if it passed all tests, false otherwise
              **/
               bool test8();
               /**
              *  @pre None
              *  @post testing list after removing nodes form the back of the list
              *  @return true if it passed all tests, false otherwise
              **/
               bool test9();
               /**
              *  @pre None
              *  @post testing search method after randomly using all adds and removes
              *  @return true if it passed all tests, false otherwise
              **/
               bool test10();
               /**
              *  @pre None
              *  @post checking that the list is in the correct order after removing nodes from the front of the list
              *  @return true if it passed all tests, false otherwise
              **/
               bool test11();
               /**
              *  @pre None
              *  @post checking that the list is in the correct order after removing nodes from the back of the list
              *  @return true if it passed all tests, false otherwise
              **/
               bool test12();


     private:
         int size;
         int numTests;
         int numPassed;
};
#endif
