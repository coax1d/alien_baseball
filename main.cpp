#include "Alien.h"
#include "BaseballPlayer.h"
#include <unistd.h>
#include <thread>
#include <memory>
#include <mutex>
#include <iostream>

struct Players {
    BaseballPlayer &self;
    BaseballPlayer &catch_partner;
};

#define THROW_SPEED 2 // seconds

void throw_timer() {

    unsigned count = 0;
    for (;;) {

        if (++count == THROW_SPEED) {
            return;
        }

        sleep(1);
    }
}

// void start_play_catch(Players &players, std::mutex &m) {

//     for (;;) {

//         m.lock();

//         if (players.self.has_baseball()) {

//             throw_timer(); // wind up
//             players.self.throw_baseball(players.catch_partner);
//             std::cout << "ball thrown by " << players.self.get_name()
//                       << " to " << players.catch_partner.get_name() << std::endl;
//         }

//         m.unlock();
//     }
// }

// void play_catch(BaseballPlayer &player1, BaseballPlayer &player2) {

//     std::mutex baseball_mutex;

//     // give initial baseball to andrew
//     player1.catch_baseball();

//     Players p1 = {player1, player2};
//     Players p2 = {player2, player1};
//     // Players &p2 = *new Players(player2,player1);

//     std::thread t1(start_play_catch, std::ref(p1), std::ref(baseball_mutex));
//     start_play_catch(std::ref(p2), std::ref(baseball_mutex));
// }

int main(void) {


    BaseballPlayer player1("Andrew");
    BaseballPlayer player2("Michael");

    player1.has_baseball();

    std::cout << "Baseball player 1 name " << player1.get_name()
              << " Has baseball " << player1.has_baseball() << std::endl;

    // play_catch(player1, player2);

    return 0;
}
