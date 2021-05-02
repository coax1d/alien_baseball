#pragma once

enum default_entity_type {
    DEFAULT_ALIEN_TYPE = 1,
    DEFAULT_HUMAN_TYPE = 2,
    DEFAULT_BASEBALLMITT_TYPE = 3
};

class Entity {
    public:
        virtual int get_type() const = 0;
        virtual void set_type(int type) = 0;
        virtual ~Entity() = default;
};
