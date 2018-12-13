CXXFLAGS=-std=c++14
main: main.o myvector.o
	g++ -o main main.o myvector.o
main.o: main.cpp myvector.h myvector.hxx
	g++ $(CXXFLAGS) -c main.cpp
myvector.o: myvector.cpp myvector.h myvector.hxx
	g++ $(CXXFLAGS) -c myvector.cpp
tests: tests.o myvector.o tests_myvector.o
	g++ -o tests tests.o myvector.o tests_myvector.o
tests_myvector.o: tests_myvector.cpp
	g++ $(CXXFLAGS) -c tests_myvector.cpp
tests.o: tests.cpp
	g++ $(CXXFLAGS) -c tests.cpp
clean:
	rm -f main.o myvector.o tests.o tests_myvector.o
