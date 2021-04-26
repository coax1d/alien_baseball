#ifndef ALIENBASEBALL_ENTITY_H_
#define ALIENBASEBALL_ENTITY_H_
#pragma once

class Entity {
    public:
        virtual void print_type() const = 0;
        virtual void set_type(int type) = 0;
};

#endif // ALIENBASEBALL_ENTITY_H_