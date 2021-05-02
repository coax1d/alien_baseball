#include "Human.h"
#include <iostream>

Human::Human(std::string a_name) :
    name{std::move(a_name)}
{}

Human::~Human() {}

int Human::get_type() const {
    return this->type;
}

void Human::set_type(int type) {
    this->type = type;
}

const std::string & Human::get_name() const {
    return this->name;
}

void Human::set_name(std::string name) {
    this->name = std::move(name);
}
