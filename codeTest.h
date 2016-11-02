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
          //Test constructor
               //make sure the list is created empty and looking at nullptr
          //Test isEmpty()
               //case 1: new list returns true -- DONE
               //case 2: added nodes, should return false -- DONE
               //case 3: remove a couple nodes, should return false -- DONE
               //case 4: removes more nodes than available, should return true
          //Test size()
               //case 1: new list returns zero
               //case 2: added nodes, return correct number of nodes
               //case 3: remove a couple nodes, should return correct number
               //case 4: added some more, should return correct number
               //case 5: removed more nodes than available, should return zero
               //case 6: add some nodes again, should return correct number
          //Test search()
               //case 1: new list returns false
               //case 2: added nodes and search for existing value, should return true
               //case 3: search for nonexistent value, should return false
               //case 4: remove a node and search for that value, return false
               //case 5: remove more nodes than available and search, should return false
               //case 6: redo cases 2 through 4
          //Test addBack(int value)
               //case 1: add to empty list, should be one node with correct value
               //case 2: add again, check that the new node is behind the first node
               //case 3: add once more, check that the nodes are in the correct order
               //case 4: remove and add, check order
                    //try with both removes
               //case 5: remove more than available and add more nodes, check order
                    //check after each add
               //don't forget to check the last node is looking at nullptr
          //Test addFront(int value)
               //case 1: add to empty list, should be one node with correct value
               //case 2: add again, check that the new node is in front of the first node
               //case 3: add once more, check that the nodes are in the correct order
               //case 4: remove and add, check order
                    //try with both removes
               //case 5: remove more than available and add more nodes, check order
                    //check after each add
               //don't forget to check the last node is looking at nullptr
          //Test removeBack()
               //case 1: try to remove from new list return false
                    //should throw error
               //case 2: add some nodes and remove one, should return true
                    //also check if it removed the correct one
               //case 3: remove more nodes than available, return false on the last remove
                    //should throw error
               //don't forget to check the last node is looking at nullptr
          //Test removeFront()
               //case 1: try to remove from new list return false
                    //should throw error
               //case 2: add some nodes and remove one, should return true
                    //also check if it removed the correct one
               //case 3: remove more nodes than available, return false on the last remove
                    //should throw error
               //don't forget to check the last node is looking at nullptr
          //method to run all tests
               //thoughts:
                    //make multiple methods for each case
                         //manipulate a linked list and run the tests at each step
                    //make one test method for each linked list method
                         //pass it a new linked list to manipulate on its own
          //write any bugs to a file
               //thoughts:
                    //maybe return strings???
                    //or just write to the file at the end of each test method
                         //only if the string isn't empty
          //must print out what each test is doing and if it passed or failed
               //only fails should be in the bug report
          //make a method in which a bug description is passed to it
               //will write the bug to the text file

               codeTest(LinkedListOfInts testList);
               void testIsEmpty();

     private:
          //LinkedList object to test on
          LinkedListOfInts tester;
};
#endif
