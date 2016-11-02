#include "codeTest.h"

codeTest::codeTest(LinkedListOfInts testList)
{
     tester = testList;
}

void codeTest::testIsEmpty()
{
     std::cout<<"Testing isEmpty():\n";

     //BRAND SPANKIN NEW LIST//
     std::cout<<"\ta new list: ";
     if(tester.isEmpty() == true)
     {
          std::cout<<"PASSED\n";
     }
     else
     {
          std::cout<<"FAILED\n";
          //write "Test on isEmpty() with a new list returns false\n" onto bug text file
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
          //write "Test on isEmpty() with a list of a size of at least one node returns true\n" onto bug text file
     }

     //POPULATED LIST AFTER ONE REMOVE//
     std::cout<<"\tlist after removing, but still has nodes: ";
     if(tester.removeBack())
     {
          if(tester.isEmpty())
          {
               std::cout<<"PASSED\n";
          }
          else
          {
               std::cout<<"FAILED\n";
               //write "Test on isEmpty() with a list after removing one node, but still populated returns true\n" onto bug text file
          }
     }
     else//COULDN'T EVEN REMOVE
     {
          std::cout<<"ERROR: COULD NOT REMOVE\n\n";
     }

     //REMOVE MORE NODES THAN ARE PRESENT//
     std::cout<<"\tlist after removing more nodes than available: ";
     while(tester.removeBack()){}
     
}
