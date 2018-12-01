CXXFLAGS=-std=c++11
main: main.o social.o
	g++ -o main main.o social.o
main.o: main.cpp social.h
	g++ $(CXXFLAGS) -c main.cpp
social.o: social.cpp social.h
	g++ $(CXXFLAGS) -c social.cpp
tests: tests.o social.o tests_social.o
	g++ -o tests tests.o social.o tests_social.o
tests_social.o: tests_social.cpp
	g++ $(CXXFLAGS) -c tests_social.cpp
tests.o: tests.cpp
	g++ $(CXXFLAGS) -c tests.cpp
clean:
	rm -f main.o social.o tests.o tests_social.o
