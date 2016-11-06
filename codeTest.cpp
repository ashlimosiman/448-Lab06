#include "codeTest.h"

codeTest::codeTest()
{
}

void codeTest::runTests()
{
     /*
     LinkedListOfInts emptyTest;
     LinkedListOfInts sizeTest;
     LinkedListOfInts searchTest;
     */

     testIsEmpty();
     testSize();
     testSearch();
}

void codeTest::testIsEmpty()
{
     std::cout<<"Testing isEmpty():\n";

     LinkedListOfInts tester;

     //BRAND SPANKIN NEW LIST//
     std::cout<<"\ta new list: ";
     if(tester.isEmpty() == true)
     {
          std::cout<<"PASSED\n";
     }
     else
     {
          std::cout<<"FAILED\n";
          //write "Test on isEmpty() with a new list returns false\n" onto bug.txt
     }

     //LIST AFTER NODES ADDED//
     std::cout<<"\tlist with at least one node: ";
     tester.addFront(26);
     tester.addFront(19);
     tester.addFront(17);
     if(tester.isEmpty() == false)
     {
          std::cout<<"PASSED\n";
     }
     else
     {
          std::cout<<"FAILED\n";
          //write "Test on isEmpty() with a list of a size of at least one node returns true\n" onto bug.txt
     }

     //LIST AFTER ALL REMOVES//
     std::cout<<"\tlist after removing all nodes: ";
     tester.removeBack();
     tester.removeBack();
     tester.removeBack();
     if(tester.isEmpty())
     {
          std::cout<<"PASSED\n";
     }
     else
     {
          std::cout<<"FAILED\n";
          //write "Test on isEmpty() with a list after removing all nodes returns true\n" onto bug.txt
     }

     //LIST AFTER REMOVE ON EMPTY LIST//
     std::cout<<"\tlist after removing on an empty list: ";
     tester.removeBack();
     if(tester.isEmpty())
     {
          std::cout<<"PASSED\n";
     }
     else
     {
          std::cout<<"FAILED\n";
          //write "Test on isEmpty() with an empty list after removing returns true\n" onto bug.txt
     }
}

void codeTest::testSize()
{
     std::cout<<"Testing size(): \n";

     LinkedListOfInts tester;

     //BRAND NEW LIST//
     std::cout<<"\ta new list: ";
     if(tester.size() == 0)
     {
          std::cout<<"PASSED\n";
     }
     else
     {
          std::cout<<"FAILED\n";
          //write "Test on size() with a new list returns a nonzero value\n" onto bug.txt
     }

     //LIST AFTER ADDING NODES//
     std::cout<<"\tlist after adding nodes to the front: ";
     tester.addFront(5);
     tester.addFront(8);
     tester.addFront(20);
     if(tester.size() == 3)
     {
          std::cout<<"PASSED\n";
     }
     else
     {
          std::cout<<"FAILED\n";
          //write "Test on size() with a populated list after adding to the front returns incorrect size\n" onto bug.txt
     }

     std::cout<<"\tlist after adding nodes: ";
     tester.addBack(34);
     tester.addBack(56);
     if(tester.size() == 5)
     {
          std::cout<<"PASSED\n";
     }
     else
     {
          std::cout<<"FAILED\n";
          //write "Test on size() with a populated list after adding to the back returns incorrect size\n" onto bug.txt
     }

     //POPULATED LIST AFTER REMOVING//
     std::cout<<"\tlist after removing back node: ";
     tester.removeBack();
     if(tester.size() == 4)
     {
          std::cout<<"PASSED\n";
     }
     else
     {
          std::cout<<"FAILED\n";
          //write "Test on size() with a populated list after removing back node returns the incorrect size after a remove\n" onto bug.txt
     }

     std::cout<<"\tlist after removing front node: ";
     tester.removeFront();
     if(tester.size() == 3)
     {
          std::cout<<"PASSED\n";
     }
     else
     {
          std::cout<<"FAILED\n";
          //write "Test on size() with a populated list after removing front node returns the incorrect size after a remove\n" onto bug.txt
     }

     //REMOVE FROM EMPTY LIST//
     std::cout<<"\tafter removing from an empty list: ";
     tester.removeFront();
     tester.removeFront();
     tester.removeFront();
     tester.removeFront();
     if(tester.size() == 0)
     {
          std::cout<<"PASSED\n";
     }
     else
     {
          std::cout<<"FAILED\n";
          //write "Test on size() after removing from an empty list gave a nonzero size\n" onto bug.txt
     }
}

void codeTest::testSearch()
{
     std::cout<<"Testing search(): \n";

     LinkedListOfInts tester;

     //BRAND NEW LIST//
     std::cout<<"\ta new list: ";
     if(!tester.search(3))
     {
          std::cout<<"PASSED\n";
     }
     else
     {
          std::cout<<"FAILED\n";
          //write "test on search() on a new list, which is empty, returns true\n" to bug.txt
     }

     //POPULATED LIST//
     std::cout<<"\ta populated list with existing search value (addBack): ";
     tester.addBack(5);
     tester.addBack(7);
     if(tester.search(7))
     {
          std::cout<<"PASSED\n";
     }
     else
     {
          std::cout<<"FAILED\n";
          //write "Test on search() after adding nodes to the back while searching for an existing value returns false\n" onto bug.txt
     }

     std::cout<<"\ta poplulated list without the search value (addBack): ";
     if(!tester.search(3))
     {
          std::cout<<"PASSED\n";
     }
     else
     {
          std::cout<<"FAILED\n";
          //write "Test on search() with a value not in the list after adding to the back returns true\n" onto bug.txt
     }

     std::cout<<"\ta populated list with existing search value (addFront): ";
     tester.addFront(51);
     tester.addFront(27);
     if(tester.search(51))
     {
          std::cout<<"PASSED\n";
     }
     else
     {
          std::cout<<"FAILED\n";
          //write "Test on search() after adding nodes to the front while searching for an existing value returns false\n" onto bug.txt
     }

     std::cout<<"\ta poplulated list without the search value (addFront): ";
     if(!tester.search(3))
     {
          std::cout<<"PASSED\n";
     }
     else
     {
          std::cout<<"FAILED\n";
          //write "Test on search() with a value not in the list after adding to the front returns true\n" onto bug.txt
     }

     //SEARCH FOR REMOVED VALUE//
     std::cout<<"\tsearching for a value that has been removed from the front: ";
     tester.removeFront(); //removes 27
     if(!tester.search(27))
     {
          std::cout<<"PASSED\n";
     }
     else
     {
          std::cout<<"FAILED\n";
          //write "Test on search() with a value removed from the front of the list returns true\n" onto bug.txt
     }

     std::cout<<"\tsearching for a value that has been removed from the back: ";
     tester.removeBack();
     if(!tester.search(7))
     {
          std::cout<<"PASSED\n";
     }
     else
     {
          std::cout<<"FAILED\n";
          //write "Test on search() with a value removed from the back of the list returns true\n" onto bug.txt
     }
}
