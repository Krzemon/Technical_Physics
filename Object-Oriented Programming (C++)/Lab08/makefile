CXX=clang++
CXXFLAGS=-c -std=c++17 -Wall
OBJS=main.o	ProgressBar.o

all:	main
main:	$(OBJS)
				$(CXX) $(OBJS) -o main
main.o:	main.cpp
				$(CXX) $(CXXFLAGS) main.cpp -o main.o
ProgressBar.o:	ProgressBar.cpp
				$(CXX) $(CXXFLAGS) ProgressBar.cpp -o ProgressBar.o		
clean:	
				rm *.o