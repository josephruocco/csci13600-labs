CXXFLAGS=-std=c++11

main: main.o image.o
	g++ -o main main.o image.o

main.o: main.cpp image.h
	g++ $(CXXFLAGS) -c main.cpp

image.o: image.cpp image.h
	g++ $(CXXFLAGS) -c image.cpp

clean:
	rm -f main.o image.o
