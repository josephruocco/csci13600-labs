CXXFLAGS=-std=c++11

main: main.o func.o
	g++ -o main main.o func.o

main.o: main.cpp func.h
	g++ $(CXXFLAGS) -c main.cpp

func.o: func.cpp func.h
	g++ $(CXXFLAGS) -c func.cpp

tests: tests.o func.o tests_func.o
	g++ -o tests tests.o func.o tests_func.o

tests_func.o: tests_func.cpp
	g++ $(CXXFLAGS) -c tests_func.cpp

tests.o: tests.cpp
	g++ $(CXXFLAGS) -c tests.cpp

clean:
	rm -f main.o func.o tests.o tests_func.o
