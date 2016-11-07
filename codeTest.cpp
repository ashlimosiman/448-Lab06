#include "codeTest.h"

codeTest::codeTest()
{
    size = 10;
    numTests = 0;
    numPassed = 0;
}

codeTest::codeTest(int num)
{
    size = num;
    numTests = 0;
    numPassed = 0;
}

void codeTest::writeBugs(std::string bug)
{
     std::ofstream bugsFile;//output stream to write bugs to a text file
     bugsFile.open("bugs.txt", std::ios_base::app);//opening the stream

     bugsFile<<bug;//adding bug to the end of the file

     bugsFile.close();//closing the stream
}

void codeTest::runTests()
{
    std::remove("bugs.txt");

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

     std::cout<<"\n\n number of tests done: "<<numTests;
     std::cout<<"\n number of tests Passed: "<<numPassed;
     std::cout<<"\n Results: "<<numPassed<<'/'<<numTests<<"\n\n";
}

bool codeTest::test1()
{
     bool isPassed=true;
     LinkedListOfInts tester;

     std::cout<<"\n1: A new list is of size 0: ";
     numTests++;
     //new list is of size zero
     if(tester.size() == 0)
     {
          std::cout<<"PASSED\n";
          numPassed++;
     }
     else
     {
          isPassed=false;
          std::cout<<"FAILED\n \tExpected size: 0\n \tReceived size: "
                    <<tester.size()<<"\n";
          writeBugs("new list returns a size that's not zero\n");//writing to bug file
     }

     std::cout<<"\n2: A new list is seen as empty: ";
     numTests++;
     //new list says it's empty
     if(tester.isEmpty())
     {
          std::cout<<"PASSED\n";
          numPassed++;
     }
     else
     {
          isPassed=false;
          std::cout<<"FAILED\n \tisEmpty() returned false\n";
          writeBugs("isEmpty() on a new list returned false\n");//writing to bug file
     }

     std::cout<<"\n3: Searching for a value on a new list returns false: ";
     numTests++;
     //search on an empty list returns false
     if(tester.search(1))
     {
          isPassed=false;
          std::cout<<"FAILED\n \tsearching for a value returned true\n";
          writeBugs("searching for a value on a new list returned true\n");//writing to bug file
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

     std::cout<<"\n4: using removeFront on a new list: ";
     numTests++;
     //returns false if using removeFront() on an empty list
     if(tester.removeFront())
     {
          isPassed=false;
          std::cout<<"FAILED\n \tremoving a value from the front of an empty list returned true\n";
          writeBugs("removeFront() on an empty list returned true\n");//writing to bug file
     }
     else
     {
          std::cout<<"PASSED\n";
          numPassed++;
     }

     std::cout<<"\n5: size is still zero after removing the front node of an empty list: ";
     numTests++;
     //size is still zero after using removeFront() on an empty list
     if(tester.size() == 0)
     {
          std::cout<<"PASSED\n";
          numPassed++;
     }
     else
     {
          isPassed=false;
          std::cout<<"FAILED\n \tExpected size: 0 Received size: "<<tester.size()<<"\n";
          writeBugs("removeFront() on an empty list changed the size from zero\n");//writing to bug file
     }

     std::cout<<"\n6: list still seen as empty after removing front node of an empty list: ";
     numTests++;
     //isEmpty() still returns true after using removeFront() on an empty list
     if(tester.isEmpty())
     {
          std::cout<<"PASSED\n";
          numPassed++;
     }
     else
     {
          isPassed=false;
          std::cout<<"FAILED\n \tisEmpty() returned false when removeFront() was used on an empty list\n";
          writeBugs("removeFront() on an empty list has made isEmpty() return false\n");//writing to bug file
     }

     return(isPassed);
}

bool codeTest::test3()
{
     bool isPassed=true;
     LinkedListOfInts tester;

     std::cout<<"\n7: using removeBack on a new list: ";
     numTests++;
     //removeBack() on an empty list returns false
     if(tester.removeBack())
     {
          isPassed=false;
          std::cout<<"FAILED\n \tremoving a value from the back of an empty list returned true\n";
          writeBugs("removeBack() on an empty list returned true\n");//writing to bug file
     }
     else
     {
          std::cout<<"PASSED\n";
          numPassed++;
     }

     std::cout<<"\n8: size is still zero after removing the back node of an empty list: ";
     numTests++;
     //size still zero after removing back node of an empty list
     if(tester.size() == 0)
     {
          std::cout<<"PASSED\n";
          numPassed++;
     }
     else
     {
          isPassed=false;
          std::cout<<"FAILED\n \tExpected size: 0 Received size: "<<tester.size()<<"\n";
          writeBugs("removeBack() on an empty list changed the size from zero\n");//writing to bug file
     }

     std::cout<<"\n9: list still seen as empty after removing back node of an empty list: ";
     numTests++;
     //list still seen as empty after removing back node of an empty list
     if(tester.isEmpty())
     {
          std::cout<<"PASSED\n";
          numPassed++;
     }
     else
     {
          isPassed=false;
          std::cout<<"FAILED\n \tisEmpty() returned false when removeBack() was used on an empty list\n";
          writeBugs("removeBack() on an empty list has made isEmpty() return false\n");//writing to bug file
     }

     return(isPassed);
}

bool codeTest::test4()
{
     bool isPassed=true;
     LinkedListOfInts tester;

     std::cout<<"\n10: size is one after adding one node to the front: ";
     numTests++;
     tester.addFront(1);//adding one node to the front
     //size correctly says one after adding a node to the front of an empty list
     if(tester.size() == 1)
     {
          std::cout<<"PASSED\n";
          numPassed++;
     }
     else
     {
          isPassed = false;
          std::cout<<"FAILED\n \tExpected size: 1 Received size: "<<tester.size()<<"\n";
          writeBugs("addFront() did not increment size correctly after only one add\n");//writing to bug file
     }

     std::cout<<"\n11: List seen as not empty after adding node to the front: ";
     numTests++;
     //isEmpty() returns false when there is one node
     if(tester.isEmpty())
     {
          isPassed = false;
          std::cout<<"FAILED\n \tafter adding one node to the front, isEmpty() returned true\n";
          writeBugs("isEmpty() returned true after adding one node to the front\n");//writing to bug file
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

     std::cout<<"\n12: size is one after adding one node the the back: ";
     numTests++;
     tester.addBack(1);//adding one node to the back of an empty list
     //size is one after adding one node
     if(tester.size() == 1)
     {
          std::cout<<"PASSED\n";
          numPassed++;
     }
     else
     {
          isPassed = false;
          std::cout<<"FAILED\n \tExpected size: 1 Received size: "<<tester.size()<<"\n";
          writeBugs("addBack() did not increment size correctly after adding one node to the back\n");//writing to bug file
     }

     std::cout<<"\n13: List seen as not empty after adding one node to the back: ";
     numTests++;
     //isEmpty() returns false when there is one node
     if(tester.isEmpty())
     {
          isPassed = false;
          std::cout<<"FAILED\n \tafter adding one node to the back, isEmpty() returned true\n";
          writeBugs("isEmpty() returned true after adding one node to the back\n");//writing to bug file
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
     int tracker=0;//actual size to compare to list's recorded size

     std::cout<<"\n14: size is correct after multiple addFront()\'s: ";
     numTests++;
     //adding multiple nodes to the front of the list only
     for(int x = 0 ; x < size ; x++)
     {
          if(x%6 == 0)
          {
               tester.addFront(x);
               tracker++;//increasing actual size
          }
     }
     //the actual size and the list's recorded size match
     if(tester.size() == tracker)
     {
          std::cout<<"PASSED\n";
          numPassed++;
     }
     else
     {
          isPassed = false;
          std::cout<<"FAILED\n \tExpected size: "<<tracker<<" Received size: "<<tester.size()<<"\n";
          writeBugs("after adding multiple values to the front of the list, the size was not correct\n");//writing to bug file
     }

     return(isPassed);
}

bool codeTest::test7()
{
     bool isPassed = true;
     LinkedListOfInts tester;
     int tracker = 0;//actual size of list to compare to list's recorded size

     std::cout<<"\n15: size is correct after multiple addBack()\'s: ";
     numTests++;
     //adding nodes to the back of the list only
     for(int x = 0 ; x < size ; x++)
     {
          if(x%5 == 0)
          {
               tester.addBack(x);
               tracker++;
          }
     }

     //actual size and list's recorded size match
     if(tester.size() == tracker)
     {
          std::cout<<"PASSED\n";
          numPassed++;
     }
     else
     {
          isPassed = false;
          std::cout<<"FAILED\n \t Expected size: "<<tracker<<" Received size: "<<tester.size()<<"\n";
          writeBugs("after adding multiple nodes to the back of the list, the size was not correct\n");//writing to bug file
     }

     return(isPassed);
}

bool codeTest::test8()
{
     bool isPassed = true;
     LinkedListOfInts tester;
     int tracker = 0;//tracking actual size

     std::cout<<"\n16: size is correct after removing nodes from the front: ";
     numTests++;
     //adding and removing nodes from the front of the list only
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

     //actual size and list's recorded size match
     if(tester.size() == tracker)
     {
          std::cout<<"PASSED\n";
          numPassed++;
     }
     else
     {
          isPassed = false;
          std::cout<<"FAILED\n \tExpected size: "<<tracker<<" Received size: "<<tester.size()<<"\n";
          writeBugs("after removing front nodes, the size was not correctly tracked\n");//writing to bug file
     }

     return(isPassed);
}

bool codeTest::test9()
{
     bool isPassed = true;
     LinkedListOfInts tester;
     int tracker = 0;//tracks actual size

     std::cout<<"\n17: size is correct after removing nodes from the back: ";
     numTests++;
     //adding and removing nodes from the back of the list only
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

     //actual size and list's recorded size match
     if(tester.size() == tracker)
     {
          std::cout<<"PASSED\n";
          numPassed++;
     }
     else
     {
          isPassed = false;
          std::cout<<"FAILED\n \tExpected size: "<<tracker<<" Received size: "<<tester.size()<<"\n";
          writeBugs("after removing back nodes, size was not correctly tracked\n");//writing to bug file
     }

     return(isPassed);
}

bool codeTest::test10()
{
     bool isPassed = true;
     LinkedListOfInts tester;
     int tracker = 0; //tracks actual size

     size = size*2;//increase size to better randomly add and remove nodes

     //randomly adding and removing from, both, the back and the front of the list
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


     std::cout<<"\n18: searchng a value not on the list: ";
     numTests++;
     //searching for a value never added to the list
     if(tester.search(41))//never added to the list
     {
          isPassed = false;
          std::cout<<"FAILED\n \tsearched for a value, 41, never on the list and returned true\n";
          writeBugs("search(41) returned true when 41 was never added\n");//writing to bug file
     }
     else
     {
          std::cout<<"PASSED\n";
          numPassed++;
     }

     std::cout<<"\n19: searching for a value on the list: ";
     numTests++;
     //searching for a value that is for sure on the list
     if(tester.search(2))//is on the list
     {
          std::cout<<"PASSED\n";
          numPassed++;
     }
     else
     {
          isPassed = false;
          std::cout<<"FAILED\n \tsearched for a value, 2, on the list and returned false\n";
          writeBugs("search(2) returned false when 2 was on the list\n");//writing to bug file
     }

     std::cout<<"\n20: searching for value removed from the front: ";
     numTests++;
     //searching for a value that was removed from the front of the list
     if(tester.search(4))//removed by removeFront()
     {
          isPassed = false;
          std::cout<<"FAILED\n \tsearch for a value, 4, removed from the front returned true\n";
          writeBugs("search(4) returned true when 4 was removed from the front\n");//writing to bug file
     }
     else
     {
          std::cout<<"PASSED\n";
          numPassed++;
     }

     std::cout<<"\n21: searching for a value removed from the back: ";
     numTests++;
     //searching for a value that was removed from the back of the list
     if(tester.search(30))//removed by removeBack()
     {
          isPassed = false;
          std::cout<<"FAILED\n \tsearch for a value, 30, removed from the back returned true\n";
          writeBugs("search(30) returned true when 30 was removed from the back\n");//writing to bug file
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
     std::vector<int> ans;//holds actual order
     std::vector<int> result;//holds order from using LinkedListOfInts's methods

     std::cout<<"\n22: order upheld after removing front nodes: ";
     numTests++;
     //adding and removing nodes from the front of the list and the answer vector
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

     result = tester.toVector();//converting test list to a vector

     //comparing the vectors
     if(ans == result)
     {
          std::cout<<"PASSED\n";
          numPassed++;
     }
     else
     {
         isPassed = false;
          std::cout<<"FAILED\n \tremoveFront() was not working correctly. Comparison Below: \n";
          writeBugs("removeFront() did not correctly uphold the order of the list\n");//writing to bug file
     }

     //printing out the test list's results and the answer list
     std::cout<<"COMPARISON:\n YOURS: { ";
     for(unsigned int a = 0 ; a < result.size() ; a++)
     {
          std::cout<<result.at(a);
          if(a < result.size() - 1)
          {
               std::cout<<", ";
          }
     }
     std::cout<<" }\n ANSWER: { ";
     for(unsigned int b = 0 ; b < ans.size() ; b++)
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
     std::vector<int> ans;//holds the correct order
     std::vector<int> result;//holds LinkedListOfInts's order

     std::cout<<"\n23: order upheld after removing back nodes: ";
     numTests++;
     //adding and removing values from the back of the list and the vector
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

     result = tester.toVector();//converting test list to a vector

    //comparing the two vectors
     if(ans == result)
     {
          std::cout<<"PASSED\n";
          numPassed++;
     }
     else
     {
         isPassed = false;
          std::cout<<"FAILED\n \tremoveBack() was not working correctly. Comparison Below: \n";
          writeBugs("removeBack() did not correctly uphold the order of the list\n");//writing to bug file
     }

     //printing out the tester list and the answer list
     std::cout<<"COMPARISON:\n YOURS: { ";
     for(unsigned int a = 0 ; a < result.size() ; a++)
     {
          std::cout<<result.at(a);
          if(a < result.size() - 1)
          {
               std::cout<<", ";
          }
     }
     std::cout<<" }\n ANSWER: { ";
     for(unsigned int b = 0 ; b < ans.size() ; b++)
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
