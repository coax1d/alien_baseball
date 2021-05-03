#include "Alien.h"
#include <iostream>

foreign_life::Alien::Alien(std::string a_name) :
    name_{std::move(a_name)}
{}

foreign_life::Alien::~Alien() {}

void foreign_life::Alien::set_type(int type) {
    type_ = type;
}

int foreign_life::Alien::get_type() const {
    return type_;
}

const std::string & foreign_life::Alien::get_name() const {
    return name_;
}

void foreign_life::Alien::set_name(std::string name) {
    name_ = std::move(name);
}
