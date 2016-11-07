#ifndef CODE_TEST_H
#define CODE_TEST_H

#include <iostream>
#include <vector>
#include "List.h"
#include "LinkedListOfInts.h"
#include "Node.h"

class codeTest
{
     public:
          //method to run all tests
               //thoughts:
                    //make multiple methods for each case
                         //manipulate a linked list and run the tests at each step
                    //make one test method for each linked list method <-- This one
                         //pass it a new linked list to manipulate on its own
          //write any bugs to a file
               //thoughts:
                    //or just write to the file at the end of each test method
                         //only if the string isn't empty
          //must print out what each test is doing and if it passed or failed
               //only fails should be in the bug report
          //make a method in which a bug description is passed to it
               //will write the bug to the text file

               codeTest();
               codeTest(int num);
               bool test1();//DONE
               bool test2();//DONE
               bool test3();//DONE
               bool test4();
               bool test5();
               bool test6();
               bool test7();
               bool test8();
               bool test9();
               bool test10();
               bool test11();
               bool test12();
               bool test13();
               bool test14();
               bool test15();
               bool test16();
               bool test17();

               /*
               void runTests();
               void testIsEmpty();
               void testSize();
               void testSearch();
               */


     private:
         int size;
};
#endif
