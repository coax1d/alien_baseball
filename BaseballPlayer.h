#pragma once

#include "Human.h"
#include "BaseballMitt.h"
#include <memory>

class BaseballPlayer : public Human {

    public:
        BaseballPlayer() = default;
        explicit BaseballPlayer(std::string a_name);
        ~BaseballPlayer();

        const std::string & get_name() const;
        void set_name(std::string name);

        bool has_baseball() const;
        void catch_baseball();
        void throw_baseball(BaseballPlayer &catch_partner);
        void put_on_mitt(BaseballMitt mitt);
        const BaseballMitt & get_mitt();

    private:
        class BaseballPlayerImpl;
        std::unique_ptr<BaseballPlayerImpl> pImpl_;
};
