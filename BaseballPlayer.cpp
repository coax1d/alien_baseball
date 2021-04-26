#include "BaseballPlayer.h"
#include "BaseballPlayerImpl.h"
#include <cassert>
#include <string>

BaseballPlayer::BaseballPlayer(std::string a_name) :
    pImpl_{new BaseballPlayerImpl{std::move(a_name)}}
{}

bool BaseballPlayer::has_baseball() const {
    return pImpl_->has_baseball();
}

void BaseballPlayer::catch_baseball() {
    pImpl_->catch_baseball();
}

void BaseballPlayer::throw_baseball(BaseballPlayer &catch_partner) {
    pImpl_->throw_baseball(catch_partner);
}
