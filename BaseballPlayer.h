#pragma once

#include "Human.h"
#include <memory>

class BaseballPlayer : public Human {

    public:
        BaseballPlayer() = default;
        explicit BaseballPlayer(std::string a_name);
        ~BaseballPlayer();

        const std::string& get_name() const;
        bool has_baseball() const;
        void catch_baseball();
        void throw_baseball(BaseballPlayer &catch_partner);

    private:
        class BaseballPlayerImpl;
        std::unique_ptr<BaseballPlayerImpl> pImpl_;
};
