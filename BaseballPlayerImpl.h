#pragma once

#include "BaseballPlayer.h"
#include "BaseballMitt.h"

class BaseballPlayer::BaseballPlayerImpl : public Human {

    public:
        BaseballPlayerImpl() = default;
        explicit BaseballPlayerImpl(std::string a_name);
        ~BaseballPlayerImpl() = default;

        bool has_baseball() const;
        void catch_baseball();
        void throw_baseball(BaseballPlayer &catch_partner);

    private:
        int type = DEFAULT_HUMAN_TYPE;
        std::string name;
        bool baseball = false;
        BaseballMitt mitt;
};
