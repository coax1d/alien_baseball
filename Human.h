#include "Entity.h"

#define DEFAULT_HUMAN_TYPE 2

class Human : public Entity {

    public:
        Human() = default;
        explicit Human(std::string a_name);

        void print_type() override;
        void set_type(int type) override;

        const std::string& get_name();
        void set_name(std::string &name);

    private:
        int type = DEFAULT_HUMAN_TYPE;
        std::string name;
};