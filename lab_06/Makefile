CXXFLAGS=-std=c++11

main: main.o encrypt.o
	g++ -o main main.o encrypt.o

main.o: main.cpp encrypt.h
	g++ $(CXXFLAGS) -c main.cpp

encrypt.o: encrypt.cpp encrypt.h
	g++ $(CXXFLAGS) -c encrypt.cpp

tests: tests.o encrypt.o tests_encrypt.o
	g++ -o tests tests.o encrypt.o tests_encrypt.o

tests_encrypt.o: tests_encrypt.cpp
	g++ $(CXXFLAGS) -c tests_encrypt.cpp

tests.o: tests.cpp
	g++ $(CXXFLAGS) -c tests.cpp

clean:
	rm -f main.o encrypt.o tests.o tests_encrypt.o
