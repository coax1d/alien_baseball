#include "Human.h"

Human::Human(std::string a_name) :
    name{std::move(a_name)} {}

void Human::print_type() {
    std::cout << "Human Type is " << this->type << std::endl;
}

void Human::set_type(int type) {
    this->type = type;
}

const std::string& Human::get_name() {
    return this->name;
}

void Human::set_name(std::string &name) {
    this->name = name;
}