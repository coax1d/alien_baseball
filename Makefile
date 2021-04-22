CXX = g++
CXXFLAGS = -Wall -g -std=c++2a

default: main

main: main.o Alien.o Human.o BaseballPlayer.o
	$(CXX) $(CXXFLAGS) -o main main.o Alien.o Human.o BaseballPlayer.o

main.o: Alien.h BaseballPlayer.h Human.h main.cpp

Alien.o: Alien.h Entity.h Alien.cpp
#	$(CXX) $(CXXFLAGS) -c Alien.cpp

Human.o: Human.h Entity.h Human.cpp
#	$(CXX) $(CXXFLAGS) -c Human.cpp

BaseballPlayer.o: BaseballPlayer.h Human.h BaseballPlayer.cpp

clean:
	$(RM) main *.o *~

