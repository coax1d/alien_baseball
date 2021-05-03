#pragma once

#include "Entity.h"
#include <string>

class Human : public Entity {

    public:
        Human() = default;
        explicit Human(std::string a_name);
        ~Human();

        int get_type() const override;
        void set_type(int type) override;

        const std::string& get_name() const;
        void set_name(std::string name);

    private:
        std::string name_;
        int type_ = DEFAULT_HUMAN_TYPE;
};
