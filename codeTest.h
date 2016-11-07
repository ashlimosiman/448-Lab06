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
               codeTest();
               codeTest(int num);
               void writeBugs(std::string bug);
               void runTests();
               bool test1();
               bool test2();
               bool test3();
               bool test4();
               bool test5();
               bool test6();
               bool test7();
               bool test8();
               bool test9();
               bool test10();
               bool test11();
               bool test12();


     private:
         int size;
         int numTests;
         int numPassed;
};
#endif
