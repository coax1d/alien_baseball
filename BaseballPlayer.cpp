#include "BaseballPlayer.h"

BaseballPlayer::BaseballPlayer(std::string a_name) :
    Human(std::move(a_name)) {}

bool BaseballPlayer::has_baseball() {
    return this->baseball;
}

void BaseballPlayer::catch_baseball() {
    this->baseball = true;
}

void BaseballPlayer::throw_baseball(BaseballPlayer &catch_partner) {
    this->baseball = false;
    catch_partner.catch_baseball();
}