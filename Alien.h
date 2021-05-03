#pragma once

#include "Entity.h"
#include <string>

namespace foreign_life {

    class Alien : public Entity {

        public:
            Alien() = default;
            explicit Alien(std::string a_name);
            ~Alien();

            int get_type() const override;
            void set_type(int type) override;

            const std::string& get_name() const;
            void set_name(std::string name);

        private:
            std::string name_;
            int type_ = DEFAULT_ALIEN_TYPE;

    };
}
