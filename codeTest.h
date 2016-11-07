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
          //write any bugs to a file
               //thoughts:
                    //or just write to the file at the end of each test method
                         //only if the string isn't empty
          //must print out what each test is doing and if it passed or failed
               //only fails should be in the bug report

               codeTest();
               codeTest(int num);
               void runTests();
               bool test1();//DONE
               bool test2();//DONE
               bool test3();//DONE
               bool test4();//DONE
               bool test5();//DONE
               bool test6();//DONE
               bool test7();//DONE
               bool test8();//DONE
               bool test9();//DONE
               bool test10();//DONE
               bool test11();//DONE
               bool test12();//DONE


     private:
         int size;
         int numTests;
};
#endif
