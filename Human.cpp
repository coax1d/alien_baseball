#include "Human.h"
#include <iostream>

Human::Human(std::string a_name) :
    name{std::move(a_name)}
{}

void Human::print_type() const {
    std::cout << "Human Type is " << this->type << std::endl;
}

void Human::set_type(int type) {
    this->type = type;
}

const std::string& Human::get_name() const {
    return this->name;
}

void Human::set_name(std::string name) {
    this->name = std::move(name);
}
