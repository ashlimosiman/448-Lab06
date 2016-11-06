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
          //Test isEmpty()
               //case 1: new list returns true -- DONE
               //case 2: added nodes, should return false -- DONE
               //case 3: remove all nodes, should return true -- DONE
               //case 4: remove on an empty list, should return true -- DONE
          //Test size()
               //case 1: new list returns zero -- DONE
               //case 2: added nodes, return correct number of nodes -- DONE
               //case 3: remove a couple nodes, should return correct number -- DONE
               //case 4: removed more nodes than available, should return zero -- DONE
          //Test search()
               //case 1: new list returns false -- DONE
               //case 2: added nodes and search for existing value, should return true -- DONE
               //case 3: search for nonexistent value, should return false -- DONE
               //case 4: remove a node and search for that value, return false -- DONE

               //what's left
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
               //case 2: add some nodes and remove one, should return true
                    //also check if it removed the correct one
               //case 3: remove more nodes than available, return false on the last remove
               //don't forget to check the last node is looking at nullptr
          //Test removeFront()
               //case 1: try to remove from new list return false

               //case 2: add some nodes and remove one, should return true
                    //also check if it removed the correct one
               //case 3: remove more nodes than available, return false on the last remove
               //don't forget to check the last node is looking at nullptr
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
               void runTests();
               void testIsEmpty();
               void testSize();
               void testSearch();

     private:

};
#endif
