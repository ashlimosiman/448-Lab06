#include "codeTest.h"

codeTest::codeTest()
{
    size = 10;
    numTests = 0;
}

codeTest::codeTest(int num)
{
    size = num;
    numTests = 0;
}

void codeTest::runTests()
{
     test1();
     test2();
     test3();
     test4();
     test5();
     test6();
     test7();
     test8();
     test9();
     

     std::cout<<"\n\n number of tests done: "<<numTests<<"\n\n";
}

bool codeTest::test1()
{
     bool isPassed=true;
     LinkedListOfInts tester;

     std::cout<<"1: A new list is of size 0: ";
     numTests++;
     if(tester.size() == 0)
     {
          std::cout<<"PASSED\n";
     }
     else
     {
          isPassed=false;
          std::cout<<"FAILED\n \tExpected size: 0\n \tReceived size: "
                    <<tester.size()<<"\n";
          //write to file "new list returns a size that's not zero"
     }

     std::cout<<"2: A new list is seen as empty: ";
     numTests++;
     if(tester.isEmpty())
     {
          std::cout<<"PASSED\n";
     }
     else
     {
          isPassed=false;
          std::cout<<"FAILED\n \tisEmpty() returned false\n";
          //write to file "isEmpty() on a new list returned false"
     }

     std::cout<<"3: Searching for a value on a new list returns false: ";
     numTests++;
     if(tester.search(1))
     {
          isPassed=false;
          std::cout<<"FAILED\n \tsearching for a value returned true\n";
          //write to file "searching for a value on a new list returned true"
     }
     else
     {
          std::cout<<"PASSED\n";
     }

     return(isPassed);
}

bool codeTest::test2()
{
     bool isPassed=true;
     LinkedListOfInts tester;

     std::cout<<"4: using removeFront on a new list: ";
     numTests++;
     if(tester.removeFront())
     {
          isPassed=false;
          std::cout<<"FAILED\n \tremoving a value from the front of an empty list returned true\n";
          //write to file "removeFront() on an empty list returned true"
     }
     else
     {
          std::cout<<"PASSED\n";
     }

     std::cout<<"5: size is still zero after removing the front node of an empty list: ";
     numTests++;
     if(tester.size() == 0)
     {
          std::cout<<"PASSED\n";
     }
     else
     {
          isPassed=false;
          std::cout<<"FAILED\n \tExpected size: 0 Received size: "<<tester.size()<<"\n";
          //write to file "removeFront() on an empty list changed the size from zero";
     }

     std::cout<<"6: list still seen as empty after removing front node of an empty list: ";
     numTests++;
     if(tester.isEmpty())
     {
          std::cout<<"PASSED\n";
     }
     else
     {
          isPassed=false;
          std::cout<<"FAILED\n \tisEmpty() returned false when removeFront() was used on an empty list\n";
          //write to file "removeFront() on an empty list has made isEmpty() return false"
     }

     return(isPassed);
}

bool codeTest::test3()
{
     bool isPassed=true;
     LinkedListOfInts tester;

     std::cout<<"7: using removeBack on a new list: ";
     numTests++;
     if(tester.removeBack())
     {
          isPassed=false;
          std::cout<<"FAILED\n \tremoving a value from the back of an empty list returned true\n";
          //write to file "removeBack() on an empty list returned true"
     }
     else
     {
          std::cout<<"PASSED\n";
     }

     std::cout<<"8: size is still zero after removing the back node of an empty list: ";
     numTests++;
     if(tester.size() == 0)
     {
          std::cout<<"PASSED\n";
     }
     else
     {
          isPassed=false;
          std::cout<<"FAILED\n \tExpected size: 0 Received size: "<<tester.size()<<"\n";
          //write to file "removeBack() on an empty list changed the size from zero";
     }

     std::cout<<"9: list still seen as empty after removing back node of an empty list: ";
     numTests++;
     if(tester.isEmpty())
     {
          std::cout<<"PASSED\n";
     }
     else
     {
          isPassed=false;
          std::cout<<"FAILED\n \tisEmpty() returned false when removeBack() was used on an empty list\n";
          //write to file "removeBack() on an empty list has made isEmpty() return false"
     }

     return(isPassed);
}

bool codeTest::test4()
{
     bool isPassed=true;
     LinkedListOfInts tester;

     std::cout<<"10: size is one after adding one node to the front: ";
     numTests++;
     tester.addFront(1);
     if(tester.size() == 1)
     {
          std::cout<<"PASSED\n";
     }
     else
     {
          isPassed = false;
          std::cout<<"FAILED\n \tExpected size: 1 Received size: "<<tester.size()<<"\n";
          //write to file "addFront() did not increment size correctly after only one add"
     }

     std::cout<<"11: List seen as not empty after adding node to the front: ";
     numTests++;
     if(tester.isEmpty())
     {
          isPassed = false;
          std::cout<<"FAILED\n \tafter adding one node to the front, isEmpty() returned true\n";
          //write to file "isEmpty() returned true after adding one node to the front"
     }
     else
     {
          std::cout<<"PASSED\n";
     }

     return(isPassed);
}

bool codeTest::test5()
{
     bool isPassed = true;
     LinkedListOfInts tester;

     std::cout<<"12: size is one after adding one node the the back: ";
     numTests++;
     tester.addBack(1);
     if(tester.size() == 1)
     {
          std::cout<<"PASSED\n";
     }
     else
     {
          isPassed = false;
          std::cout<<"FAILED\n \tExpected size: 1 Received size: "<<tester.size()<<"\n";
          //write to file "addBack() did not increment size correctly after adding one node to the back"
     }

     std::cout<<"13: List seen as not epmty after adding one node to the back: ";
     numTests++;
     if(tester.isEmpty())
     {
          isPassed = false;
          std::cout<<"FAILED\n \tafter adding one node to the back, isEmpty() returned true\n";
          //write to file "isEmpty() returned true after adding one node to the back"
     }

     return(isPassed);
}

bool codeTest::test6()
{
     bool isPassed = true;
     LinkedListOfInts tester;
     int tracker=0;

     std::cout<<"14: size is correct after multiple addFront()\'s: ";
     numTests++;
     for(int x = 0 ; x < size ; x++)
     {
          if(x%6 == 0)
          {
               tester.addFront(x);
               tracker++;
          }
     }

     if(tester.size() == tracker)
     {
          std::cout<<"PASSED\n";
     }
     else
     {
          isPassed = false;
          std::cout<<"FAILED\n \tExpected size: "<<tracker<<" Received size: "<<tester.size()<<"\n";
          //write to file "after adding multiple vaues to the front of the list, the size was not correct"
     }

     return(isPassed);
}

bool codeTest::test7()
{
     bool isPassed = true;
     LinkedListOfInts tester;
     int tracker = 0;

     std::cout<<"15: size is correct after multiple addBack()\'s: ";
     numTests++;
     for(int x = 0 ; x < size ; x++)
     {
          if(x%5 == 0)
          {
               tester.addBack(x);
               tracker++;
          }
     }

     if(tester.size() == tracker)
     {
          std::cout<<"PASSED\n";
     }
     else
     {
          isPassed = false;
          std::cout<<"FAILED\n \t Expected size: "<<tracker<<" Received size: "<<tester.size()<<"\n";
          //write to file "after adding multiple nodes to the back of the list, the size was not correct"
     }

     return(isPassed);
}

bool codeTest::test8()
{
     bool isPassed = true;
     LinkedListOfInts tester;
     int tracker = 0;

     std::cout<<"16: size is correct after removing nodes from the front: ";
     numTests++;
     for(int x = 0 ; x < size ; x++)
     {
          if(x%2 == 0)
          {
               tester.addFront(x);
               tracker++;
          }
          if(x%3 == 0)
          {
               tester.removeFront();
               tracker--;
          }
     }

     if(tester.size() == tracker)
     {
          std::cout<<"PASSED\n";
     }
     else
     {
          isPassed = false;
          std::cout<<"FAILED\n \tExpected size: "<<tracker<<" Received size: "<<tester.size()<<"\n";
          //write to file "after removing front nodes, the size was not correctly tracked"
     }

     return(isPassed);
}

bool codeTest::test9()
{
     bool isPassed = true;
     LinkedListOfInts tester;
     int tracker = 0;

     std::cout<<"17: size is correct after removing nodes from the back: ";
     numTests++;
     for(int x = 0 ; x < size ; x++)
     {
          if(x%2 == 0)
          {
               tester.addBack(x);
               tracker++;
          }
          if(x%3 == 0)
          {
               tester.removeBack();
               tracker--;
          }
     }

     if(tester.size() == tracker)
     {
          std::cout<<"PASSED\n";
     }
     else
     {
          isPassed = false;
          std::cout<<"FAILED\n \tExpected size: "<<tracker<<" Received size: "<<tester.size()<<"\n";
          //write to file "after removing back nodes, size was not correctly tracked"
     }

     return(isPassed);
}
