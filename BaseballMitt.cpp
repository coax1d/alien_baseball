#include "BaseballMitt.h"
#include <iostream>

BaseballMitt::BaseballMitt(std::string a_color) :
    color_(std::move(a_color))
{}

int BaseballMitt::get_type() const {
    return type_;
}

void BaseballMitt::set_type(int type) {
    type_ = type;
}

const std::string & BaseballMitt::get_color() const {
    return color_;
}

void BaseballMitt::set_color(std::string color) {
    color_ = std::move(color);
}

const char * BaseballMitt::get_maker() {
    return "Wilson";
}
