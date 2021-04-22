#include "Alien.h"
#include <iostream>

void foreign_life::Alien::set_type(int type) {
    this->type = type;
}

void foreign_life::Alien::print_type() const {
    std::cout << "Type of alien is " << this->type
         << std::endl;
}
