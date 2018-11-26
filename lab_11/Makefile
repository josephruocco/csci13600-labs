CXXFLAGS=-std=c++11
main: main.o recursion.o
	g++ -o main main.o recursion.o
main.o: main.cpp recursion.h
	g++ $(CXXFLAGS) -c main.cpp
recursion.o: recursion.cpp recursion.h
	g++ $(CXXFLAGS) -c recursion.cpp
tests: tests.o recursion.o tests_recursion.o
	g++ -o tests tests.o recursion.o tests_recursion.o
tests_recursion.o: tests_recursion.cpp
	g++ $(CXXFLAGS) -c tests_recursion.cpp
tests.o: tests.cpp
	g++ $(CXXFLAGS) -c tests.cpp
clean:
	rm -f main.o recursion.o tests.o tests_recursion.o
