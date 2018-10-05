CXXFLAGS=-std=c++11

main: main.o numbers.o
	g++ -o main main.o numbers.o

main.o: main.cpp numbers.h
	g++ $(CXXFLAGS) -c main.cpp

numbers.o: numbers.cpp numbers.h
	g++ $(CXXFLAGS) -c numbers.cpp

tests: tests.o numbers.o tests_numbers.o
	g++ -o tests tests.o numbers.o tests_numbers.o

tests_numbers.o: tests_numbers.cpp
	g++ $(CXXFLAGS) -c tests_numbers.cpp

tests.o: tests.cpp
	g++ $(CXXFLAGS) -c tests.cpp

clean:
	rm -f main.o numbers.o tests.o tests_numbers.o

