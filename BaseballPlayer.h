#include "Human.h"

class BaseballPlayer : public Human {

    public:
        BaseballPlayer() = default;
        explicit BaseballPlayer(std::string a_name);

        bool has_baseball();
        void catch_baseball();
        void throw_baseball(BaseballPlayer &catch_partner);

    private:
        int type = DEFAULT_HUMAN_TYPE;
        std::string name;
        bool baseball = false;
};