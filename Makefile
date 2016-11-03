#	Author: John Gibbons
#	Date: 2016.10.26


#Add needed Test.o
prog: main.o codeTest.o
	g++ -g -Wall -std=c++11 main.o LinkedListOfInts.o codeTest.o -o prog


main.o: main.cpp
	g++ -g -Wall -std=c++11 -c main.cpp


#Add needed Test.o recipe and compiler command
codeTest.o: codeTest.cpp codeTest.h
	g++ -g -Wall -std=c++11 -c codeTest.cpp

#DON'T delete LinkedList.o!
clean:
	rm main.o codeTest.o~ prog
