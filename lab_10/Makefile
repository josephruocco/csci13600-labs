CXXFLAGS=-std=c++11
main: main.o time.o
	g++ -o main main.o time.o
main.o: main.cpp time.h
	g++ $(CXXFLAGS) -c main.cpp
time.o: time.cpp time.h
	g++ $(CXXFLAGS) -c time.cpp
tests: tests.o time.o tests_time.o
	g++ -o tests tests.o time.o tests_time.o
tests_time.o: tests_time.cpp
	g++ $(CXXFLAGS) -c tests_time.cpp
tests.o: tests.cpp
	g++ $(CXXFLAGS) -c tests.cpp
clean:
	rm -f main.o time.o tests.o tests_time.o
