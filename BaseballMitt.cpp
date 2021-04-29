#include "BaseballMitt.h"
#include <iostream>

BaseballMitt::BaseballMitt(std::string a_color) :
    color(std::move(a_color))
{}

int BaseballMitt::get_type() const {
    return this->type;
}

void BaseballMitt::set_type(int type) {
    this->type = type;
}

const std::string & BaseballMitt::get_color() const {
    return this->color;
}

void BaseballMitt::set_color(std::string color) {
    this->color = std::move(color);
}
