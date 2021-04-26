CXX = g++
CXXFLAGS = -Wall -g -std=c++2a -fsanitize=address

default: main

main: main.o Alien.o Human.o BaseballPlayer.o BaseballMitt.o
	$(CXX) $(CXXFLAGS) -o main main.o Alien.o Human.o BaseballPlayer.o BaseballMitt.o -lpthread

main.o: Alien.h BaseballPlayer.h Human.h BaseballMitt.h main.cpp

Alien.o: Alien.h Entity.h Alien.cpp
#	$(CXX) $(CXXFLAGS) -c Alien.cpp

Human.o: Human.h Entity.h Human.cpp
#	$(CXX) $(CXXFLAGS) -c Human.cpp

BaseballPlayer.o: BaseballPlayer.h Human.h BaseballPlayer.cpp

BaseballMitt.o: BaseballMitt.h Entity.h BaseballMitt.cpp

clean:
	$(RM) main *.o *~
