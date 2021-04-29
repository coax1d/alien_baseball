#include "BaseballPlayer.h"
#include "BaseballPlayerImpl.h"
#include <cassert>
#include <string>

BaseballPlayer::BaseballPlayer(std::string a_name) :
    pImpl_{new BaseballPlayerImpl{std::move(a_name)}}
{}

BaseballPlayer::~BaseballPlayer() {}

const std::string& BaseballPlayer::get_name() const {
    return pImpl_->get_name();
}

void BaseballPlayer::set_name(std::string name) {
    pImpl_->set_name(std::move(name));
}

bool BaseballPlayer::has_baseball() const {
    return pImpl_->has_baseball();
}

void BaseballPlayer::catch_baseball() {
    pImpl_->catch_baseball();
}

void BaseballPlayer::throw_baseball(BaseballPlayer &catch_partner) {
    pImpl_->throw_baseball(catch_partner);
}

void BaseballPlayer::put_on_mitt(BaseballMitt mitt) {
    pImpl_->put_on_mitt(std::move(mitt));
}

const BaseballMitt & BaseballPlayer::get_mitt() {
    return pImpl_->get_mitt();
}
