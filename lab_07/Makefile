CXXFLAGS=-std=c++11

main: main.o pretty.o
	g++ -o main main.o pretty.o

main.o: main.cpp pretty.h
	g++ $(CXXFLAGS) -c main.cpp

pretty.o: pretty.cpp pretty.h
	g++ $(CXXFLAGS) -c pretty.cpp

clean:
	rm -f main.o pretty.o tests.o tests_pretty.o
