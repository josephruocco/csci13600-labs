CXXFLAGS=-std=c++11

main: main.o encryptPlus.o
	g++ -o main main.o encryptPlus.o

main.o: main.cpp encryptPlus.h
	g++ $(CXXFLAGS) -c main.cpp

encryptPlus.o: encryptPlus.cpp encryptPlus.h
	g++ $(CXXFLAGS) -c encryptPlus.cpp

tests: tests.o encryptPlus.o tests_encryptPlus.o
	g++ -o tests tests.o encryptPlus.o tests_encryptPlus.o

tests_encryptPlus.o: tests_encryptPlus.cpp
	g++ $(CXXFLAGS) -c tests_encryptPlus.cpp

tests.o: tests.cpp
	g++ $(CXXFLAGS) -c tests.cpp

clean:
	rm -f main.o encryptPlus.o tests.o tests_encryptPlus.o
