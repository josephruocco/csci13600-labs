CXXFLAGS=-std=c++11
main: main.o pointer.o
	g++ -o main main.o pointer.o

main.o: main.cpp pointer.h
	g++ $(CXXFLAGS) -c main.cpp

pointer.o: pointer.cpp pointer.h
	g++ $(CXXFLAGS) -c pointer.cpp

poem: poem.o 
	g++ -o poem poem.o

poem.o: poem.cpp
	g++ $(CXXFLAGS) -c poem.cpp

tests: tests.o pointer.o tests_pointer.o
	g++ -o tests tests.o pointer.o tests_pointer.o

tests_pointer.o: tests_pointer.cpp
	g++ $(CXXFLAGS) -c tests_pointer.cpp

tests.o: tests.cpp
	g++ $(CXXFLAGS) -c tests.cpp

clean:
	rm -f main.o pointer.o tests.o tests_pointer.o
