#pragma once

#include "Entity.h"
#include <string>

#define DEFAULT_BASEBALL_MITT 7

class BaseballMitt: Entity {

    public:
        BaseballMitt() = default;
        explicit BaseballMitt(std::string a_color);

        void print_type() const override;
        void set_type(int type) override;

        const std::string& get_color() const;

        private:
            int type = 0;
            std::string color;
};
