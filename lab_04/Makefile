CXXFLAGS=-std=c++11

main: main.o shapes.o
	g++ -o main main.o shapes.o

main.o: main.cpp shapes.h
	g++ $(CXXFLAGS) -c main.cpp

shapes.o: shapes.cpp shapes.h
	g++ $(CXXFLAGS) -c shapes.cpp

tests: tests.o shapes.o tests_shapes.o
	g++ -o tests tests.o shapes.o tests_shapes.o

tests_shapes.o: tests_shapes.cpp
	g++ $(CXXFLAGS) -c tests_shapes.cpp

tests.o: tests.cpp
	g++ $(CXXFLAGS) -c tests.cpp

clean:
	rm -f main.o shapes.o tests.o tests_shapes.o
