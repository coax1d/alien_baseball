#include <iostream>
#include <string>

#pragma once

class Entity {
    public:
        virtual void print_type() = 0;
        virtual void set_type(int type) = 0;
};