#pragma once

class Entity {
    public:
        virtual void print_type() const = 0;
        virtual void set_type(int type) = 0;
};
