#pragma once

#include "Entity.h"
#include <string>

class BaseballMitt: Entity {

    public:
        BaseballMitt() = default;
        explicit BaseballMitt(std::string a_color);

        int get_type() const override;
        void set_type(int type) override;

        void set_color(std::string color);
        const std::string & get_color() const;

        static void print_maker();

        private:
            int type = DEFAULT_BASEBALLMITT_TYPE;
            std::string color;
};
