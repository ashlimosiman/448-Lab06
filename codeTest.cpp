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
     test10();
     test11();
     test12();

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
          numPassed++:
     }
     else
     {
          isPassed=false;
          std::cout<<"FAILED\n \tExpected size: 0\n \tReceived size: "
                    <<tester.size()<<"\n";
          writeBugs("new list returns a size that's not zero\n");
     }

     std::cout<<"2: A new list is seen as empty: ";
     numTests++;
     if(tester.isEmpty())
     {
          std::cout<<"PASSED\n";
          numPassed++;
     }
     else
     {
          isPassed=false;
          std::cout<<"FAILED\n \tisEmpty() returned false\n";
          writeBugs("isEmpty() on a new list returned false\n");
     }

     std::cout<<"3: Searching for a value on a new list returns false: ";
     numTests++;
     if(tester.search(1))
     {
          isPassed=false;
          std::cout<<"FAILED\n \tsearching for a value returned true\n";
          writeBugs("searching for a value on a new list returned true\n");
     }
     else
     {
          std::cout<<"PASSED\n";
          numPassed++;
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
          writeBugs("removeFront() on an empty list returned true\n");
     }
     else
     {
          std::cout<<"PASSED\n";
          numPassed++;
     }

     std::cout<<"5: size is still zero after removing the front node of an empty list: ";
     numTests++;
     if(tester.size() == 0)
     {
          std::cout<<"PASSED\n";
          numPassed++;
     }
     else
     {
          isPassed=false;
          std::cout<<"FAILED\n \tExpected size: 0 Received size: "<<tester.size()<<"\n";
          writeBugs("removeFront() on an empty list changed the size from zero\n");
     }

     std::cout<<"6: list still seen as empty after removing front node of an empty list: ";
     numTests++;
     if(tester.isEmpty())
     {
          std::cout<<"PASSED\n";
          numPassed++;
     }
     else
     {
          isPassed=false;
          std::cout<<"FAILED\n \tisEmpty() returned false when removeFront() was used on an empty list\n";
          writeBugs("removeFront() on an empty list has made isEmpty() return false\n");
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
          writeBugs("removeBack() on an empty list returned true\n");
     }
     else
     {
          std::cout<<"PASSED\n";
          numPassed++;
     }

     std::cout<<"8: size is still zero after removing the back node of an empty list: ";
     numTests++;
     if(tester.size() == 0)
     {
          std::cout<<"PASSED\n";
          numPassed++;
     }
     else
     {
          isPassed=false;
          std::cout<<"FAILED\n \tExpected size: 0 Received size: "<<tester.size()<<"\n";
          writeBugs("removeBack() on an empty list changed the size from zero\n");
     }

     std::cout<<"9: list still seen as empty after removing back node of an empty list: ";
     numTests++;
     if(tester.isEmpty())
     {
          std::cout<<"PASSED\n";
          numPassed++;
     }
     else
     {
          isPassed=false;
          std::cout<<"FAILED\n \tisEmpty() returned false when removeBack() was used on an empty list\n";
          writeBugs("removeBack() on an empty list has made isEmpty() return false\n");
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
          numPassed++;
     }
     else
     {
          isPassed = false;
          std::cout<<"FAILED\n \tExpected size: 1 Received size: "<<tester.size()<<"\n";
          writeBugs("addFront() did not increment size correctly after only one add\n");
     }

     std::cout<<"11: List seen as not empty after adding node to the front: ";
     numTests++;
     if(tester.isEmpty())
     {
          isPassed = false;
          std::cout<<"FAILED\n \tafter adding one node to the front, isEmpty() returned true\n";
          writeBugs("isEmpty() returned true after adding one node to the front\n");
     }
     else
     {
          std::cout<<"PASSED\n";
          numPassed++;
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
          numPassed++;
     }
     else
     {
          isPassed = false;
          std::cout<<"FAILED\n \tExpected size: 1 Received size: "<<tester.size()<<"\n";
          writeBugs("addBack() did not increment size correctly after adding one node to the back\n");
     }

     std::cout<<"13: List seen as not empty after adding one node to the back: ";
     numTests++;
     if(tester.isEmpty())
     {
          isPassed = false;
          std::cout<<"FAILED\n \tafter adding one node to the back, isEmpty() returned true\n";
          writeBugs("isEmpty() returned true after adding one node to the back\n");
     }
     else
     {
          std::cout<<"PASSED\n";
          numPassed++;
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
          numPassed++;
     }
     else
     {
          isPassed = false;
          std::cout<<"FAILED\n \tExpected size: "<<tracker<<" Received size: "<<tester.size()<<"\n";
          writeBugs("after adding multiple vaues to the front of the list, the size was not correct\n");
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
          numPassed++;
     }
     else
     {
          isPassed = false;
          std::cout<<"FAILED\n \t Expected size: "<<tracker<<" Received size: "<<tester.size()<<"\n";
          writeBugs("after adding multiple nodes to the back of the list, the size was not correct\n");
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
          numPassed++;
     }
     else
     {
          isPassed = false;
          std::cout<<"FAILED\n \tExpected size: "<<tracker<<" Received size: "<<tester.size()<<"\n";
          writeBugs("after removing front nodes, the size was not correctly tracked\n");
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
          numPassed++;
     }
     else
     {
          isPassed = false;
          std::cout<<"FAILED\n \tExpected size: "<<tracker<<" Received size: "<<tester.size()<<"\n";
          writeBugs("after removing back nodes, size was not correctly tracked\n");
     }

     return(isPassed);
}

bool codeTest::test10()
{
     bool isPassed = true;
     LinkedListOfInts tester;
     int tracker = 0;

     size = size*2;//increase size to better randomly add and remove nodes

     for(int x = 0 ; x < size ; x++)
     {
          if(x%2 == 0)
          {
               tester.addFront(x);
               tracker++;
          }
          if(x%3 == 0)
          {
               tester.addBack(10*x);
               tracker++;
          }
          if(x%4 == 0)
          {
               tester.removeFront();
               tracker--;
          }
          if(x%5 == 0)
          {
               tester.removeBack();
               tracker--;
          }
     }


     std::cout<<"18: searchng a value not on the list: ";
     numTests++;
     if(tester.search(41))//never added to the list
     {
          isPassed = false;
          std::cout<<"FAILED\n \tsearched for a value, 41, never on the list and returned true\n";
          writeBugs("search(41) returned true when 41 was never added\n");
     }
     else
     {
          std::cout<<"PASSED\n";
          numPassed++;
     }

     std::cout<<"19: searching for a value on the list: ";
     numTests++;
     if(tester.search(2))//is on the list
     {
          std::cout<<"PASSED\n";
          numPassed++;
     }
     else
     {
          isPassed = false;
          std::cout<<"FAILED\n \tsearched for a value, 2, on the list and returned false\n";
          writeBugs("search(2) returned false when 2 was on the list\n");
     }

     std::cout<<"20: searching for value removed from the front: ";
     numTests++;
     if(tester.search(4))//removed by removeFront()
     {
          isPassed = false;
          std::cout<<"FAILED\n \tsearch for a value, 4, removed from the front returned true\n";
          writeBugs("search(4) returned true when 4 was removed from the front\n");
     }
     else
     {
          std::cout<<"PASSED\n";
          numPassed++;
     }

     std::cout<<"21: searching for a value removed from the back: ";
     numTests++;
     if(tester.search(30))//removed by removeBack()
     {
          isPassed = false;
          std::cout<<"FAILED\n \tsearch for a value, 30, removed from the back returned true\n";
          writeBugs("search(30) returned true when 30 was removed from the back\n");
     }
     else
     {
          std::cout<<"PASSED\n";
          numPassed++;
     }

     return(isPassed);
}

bool codeTest::test11()
{
     bool isPassed = true;
     LinkedListOfInts tester;
     std::vector<int> ans;
     std::vector<int> result;
     int tracker = 0;

     std::cout<<"22: order upheld after removing front nodes: ";
     numTests++;
     for(int x = 0 ; x < size ; x++)
     {
          if(x%2 == 0)
          {
               tester.addFront(x);
               ans.insert(ans.begin(), x);
          }
          if(x%3 == 0)
          {
               tester.removeFront();
               ans.erase(ans.begin());
          }
     }

     result = tester.toVector();

     for(int y = 0; y < result.size() ; y++)
     {
          if(ans.at(y) != result.at(y))
          {
               isPassed = false;
          }
     }

     if(isPassed)
     {
          std::cout<<"PASSED\n";
          numPassed++;
     }
     else
     {
          std::cout<<"FAILED\n \tremoveFront() was not working correctly. Comparison Below: \n";
          writeBugs("removeFront() did not correctly uphold the order of the list\n");
     }

     std::cout<<"COMPARISON:\n YOURS: { ";
     std::cout<<"{ ";
     for(int a = 0 ; a < result.size() ; a++)
     {
          std::cout<<result.at(a);
          if(a < result.size() - 1)
          {
               std::cout<<", ";
          }
     }
     std::cout<<" }\n ANSWER: { ";
     for(int b = 0 ; b < ans.size() ; b++)
     {
          std::cout<<ans.at(b);
          if(b < ans.size() - 1)
          {
               std::cout<<", ";
          }
     }
     std::cout<<" }\n\n";

     return(isPassed);
}

bool codeTest::test12()
{
     bool isPassed = true;
     LinkedListOfInts tester;
     std::vector<int> ans;
     std::vector<int> result;
     int tracker = 0;

     std::cout<<"23: order upheld after removing back nodes: ";
     numTests++;
     for(int x = 0 ; x < size ; x++)
     {
          if(x%2 == 0)
          {
               tester.addBack(x);
               ans.push_back(x);
          }
          if(x%3 == 0)
          {
               tester.removeBack();
               ans.pop_back();
          }
     }

     result = tester.toVector();

     for(int y = 0; y < result.size() ; y++)
     {
          if(ans.at(y) != result.at(y))
          {
               isPassed = false;
          }
     }

     if(isPassed)
     {
          std::cout<<"PASSED\n";
          numPassed++;
     }
     else
     {
          std::cout<<"FAILED\n \tremoveBack() was not working correctly. Comparison Below: \n";
          writeBugs("removeBack() did not correctly uphold the order of the list\n");
     }

     std::cout<<"COMPARISON:\n YOURS: { ";
     std::cout<<"{ ";
     for(int a = 0 ; a < result.size() ; a++)
     {
          std::cout<<result.at(a);
          if(a < result.size() - 1)
          {
               std::cout<<", ";
          }
     }
     std::cout<<" }\n ANSWER: { ";
     for(int b = 0 ; b < ans.size() ; b++)
     {
          std::cout<<ans.at(b);
          if(b < ans.size() - 1)
          {
               std::cout<<", ";
          }
     }
     std::cout<<" }\n\n";

     return(isPassed);
}

void codeTest::writeBugs(std::string bug)
{
     std::ofstream bugsFile;
     bugsFile.open("bugs.txt");

     bugsFile<<bug;

     bugsFile.close();
}
