#include "Entity.h"

#define DEFAULT_ALIEN_TYPE 1


namespace foreign_life {

    class Alien : public Entity {

        public:
            Alien() = default;
            void print_type() const override;
            void set_type(int type) override;

        private:
            int type = DEFAULT_ALIEN_TYPE;

    };
}
