CXX = g++
CXXFLAGS = -Wall -g -std=c++2a

default: main

main: main.o Alien.o Human.o BaseballPlayer.o BaseballPlayerImpl.o BaseballMitt.o
	$(CXX) $(CXXFLAGS) -o main main.o Alien.o Human.o BaseballPlayer.o BaseballPlayerImpl.o BaseballMitt.o -lpthread

main.o: Alien.h BaseballPlayer.h Human.h BaseballMitt.h main.cpp

Alien.o: Alien.h Entity.h Alien.cpp
#	$(CXX) $(CXXFLAGS) -c Alien.cpp

Human.o: Human.h Entity.h Human.cpp
#	$(CXX) $(CXXFLAGS) -c Human.cpp

BaseballPlayer.o: BaseballPlayer.h Human.h BaseballPlayer.cpp

BaseballPlayerImpl.o: BaseballPlayerImpl.h BaseballPlayer.h BaseballMitt.h BaseballPlayerImpl.cpp

BaseballMitt.o: BaseballMitt.h Entity.h BaseballMitt.cpp

clean:
	$(RM) main *.o *~

