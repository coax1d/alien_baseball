#include "Alien.h"
#include <iostream>

foreign_life::Alien::Alien(std::string a_name) :
    name{std::move(a_name)}
{}

foreign_life::Alien::~Alien() {}

void foreign_life::Alien::set_type(int type) {
    this->type = type;
}

int foreign_life::Alien::get_type() const {
    return this->type;
}

const std::string & foreign_life::Alien::get_name() const {
    return this->name;
}

void foreign_life::Alien::set_name(std::string name) {
    this->name = std::move(name);
}
