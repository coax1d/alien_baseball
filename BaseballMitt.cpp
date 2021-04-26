#include "BaseballMitt.h"
#include <iostream>

BaseballMitt::BaseballMitt(std::string a_color) :
    color(std::move(a_color))
{}

void BaseballMitt::print_type() const {
    std::cout << "BaseballMitt Type is " << this->type << std::endl;
}

void BaseballMitt::set_type(int type) {
    this->type = type;
}
