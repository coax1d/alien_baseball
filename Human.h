#ifndef ALIENBASEBALL_HUMAN_H_
#define ALIENBASEBALL_HUMAN_H_

#include "Entity.h"
#include <string>

#define DEFAULT_HUMAN_TYPE 2

class Human : public Entity {

    public:
        Human() = default;
        explicit Human(std::string a_name);

        void print_type() const override;
        void set_type(int type) override;

        const std::string& get_name() const;
        void set_name(std::string name);

    private:
        int type = DEFAULT_HUMAN_TYPE;
        std::string name;
};

#endif // ALIENBASEBALL_HUMAN_H_