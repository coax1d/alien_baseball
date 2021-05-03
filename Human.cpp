#include "Human.h"
#include <iostream>

Human::Human(std::string a_name) :
    name_{std::move(a_name)}
{}

Human::~Human() {}

int Human::get_type() const {
    return type_;
}

void Human::set_type(int type) {
    type_ = type;
}

const std::string & Human::get_name() const {
    return name_;
}

void Human::set_name(std::string name) {
    name_ = std::move(name);
}
