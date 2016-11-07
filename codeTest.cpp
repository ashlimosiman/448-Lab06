#include "codeTest.h"

/////////////////////////////////////
//RETHINK TEST LOGIC
////////////////////////////////////

codeTest::codeTest()
{
    size = 10;
}

codeTest::codeTest(int num)
{
    size = num;
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

bool codeTest::test1()
{
     bool isPassed=true;
     LinkedListOfInts tester;

     std::cout<<"A new list is of size 0: ";
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

     std::cout<<"A new list is seen as empty: ";
     if(tester.isEmpty())
     {
          std::cout<"PASSED\n";
     }
     else
     {
          isPassed=false;
          std::cout<<"FAILED\n \tisEmpty() returned false\n";
          //write to file "isEmpty() on a new list returned false"
     }

     std::cout<<"Searching for a value on a new list returns false: ";
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


}

/*
OLD CODE
void codeTest::testIsEmpty()
{
     std::cout<<"Testing isEmpty():\n";

     LinkedListOfInts tester;

     //BRAND SPANKIN NEW LIST//
     std::cout<<"\ta new list: ";
     if(tester.isEmpty())
     {
          std::cout<<"PASSED\n";
     }
     else
     {
          std::cout<<"FAILED\n";
          //write "Test on isEmpty() with a new list returns false\n" onto bug.txt
     }

     //LIST AFTER ADDS//
     std::cout<<"\tadd one node to the front: ";
     tester.addFront(26);
     if(tester.isEmpty())
     {
         std::cout<<"FAILED\n";
         std::cout<<"\nthe value: "<<tester.isEmpty()<<"\n\n";
         //write "Test on isEmpty() after adding one node to the front returns true\n" onto bug.txt
     }
     else
     {
         std::cout<<"PASSED\n";
     }

     std::cout<<"\tadd one node to the back: ";
     LinkedListOfInts tester2;
     tester2.addBack(25);
     if(tester2.isEmpty())
     {
         std::cout<<"FAILED\n";
         //write "Test on isEmpty() after adding one node to the back returns true\n" onto bug.txt
     }
     else
     {
         std::cout<<"PASSED\n";
     }

     std::cout<<"\tadd multiple nodes to the front: ";
     int newSize = size--;
     int value = 4;
     for(int x=0 ; x<newSize ; x++)
     {
         tester.addFront(value++);
     }
     if(tester.isEmpty())
     {
         std::cout<<"FAILED\n";
         //write "Test on isEmpty() after adding multiple nodes to the front returns true\n" onto bug.txt
     }
     else
     {
         std::cout<<"PASSED\n";
     }

     std::cout<<"\tadd multiple nodes to the back: ";
     for(int y=0 ; y<newSize ; y++)
     {
         tester2.addBack(value++);
     }
     if(tester2.isEmpty())
     {
         std::cout<<"FAILED\n";
         //write "Test on isEmpty() after adding multiple nodes to the back returns true\n" onto bug.txt
     }
     else
     {
         std::cout<<"PASSED\n";
     }

     //LIST AFTER REMOVES//
     std::cout<<"\tlist after removing one node from the front: ";
     tester.removeFront();
     newSize--;
     if(tester.isEmpty())
     {
          std::cout<<"FAILED\n";
          //write "Test on isEmpty() after removing one node from the front returns true\n" onto bug.txt
     }
     else
     {
          std::cout<<"PASSED\n";
     }

     std::cout<<"\tlist after removing one node from the back: ";
     tester2.removeBack();
     newSize--;//current list size
     if(tester2.isEmpty())
     {
          std::cout<<"FAILED\n";
          //write "Test on isEmpty() after removing one node from the back returns true\n" onto bug.txt
     }
     else
     {
          std::cout<<"PASSED\n";
     }

     std::cout<<"\tlist after removing multiple nodes from the front: ";
     newSize--;//want to keep one node on the list
     int leftToRemove = newSize;
     for(int z=0 ; z < newSize/2 ; z++)
     {
         tester.removeFront();
         leftToRemove--;
     }
     if(tester.isEmpty())
     {
          std::cout<<"FAILED\n";
          //write "Test on isEmpty() after removing multiple nodes from the front returns true\n" onto bug.txt
     }
     else
     {
          std::cout<<"PASSED\n";
     }

     std::cout<<"\tlist after removing multiple nodes from the back: ";
     for(int a=0 ; a < leftToRemove ; a++)
     {
         tester.removeBack();
     }

     if(tester.isEmpty())
     {
          std::cout<<"FAILED\n";
          //write "Test on isEmpty() after removing multple nodes from the back returns true\n" onto bug.txt
     }
     else
     {
          std::cout<<"PASSED\n";
     }
     tester.removeBack();//removing last node

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

     std::cout<<"\tlist after adding nodes to the back: ";
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

void codeTest::testAddBack(LinkedListOfInts tester)
{

}
*/
