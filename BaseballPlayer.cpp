#include "BaseballPlayer.h"
#include <cassert>
#include <string>

BaseballPlayer::BaseballPlayer(std::string a_name) :
    Human(std::move(a_name))
{}

bool BaseballPlayer::has_baseball() const {
    return this->baseball;
}

void BaseballPlayer::catch_baseball() {
    assert(!baseball);
    this->baseball = true;
}

void BaseballPlayer::throw_baseball(BaseballPlayer &catch_partner) {
    assert(baseball);
    this->baseball = false;
    catch_partner.catch_baseball();
}
