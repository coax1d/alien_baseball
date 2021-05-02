#include "BaseballPlayerImpl.h"
#include <cassert>
#include <string>

BaseballPlayer::BaseballPlayerImpl::BaseballPlayerImpl(std::string a_name) :
    Human(std::move(a_name))
{}

BaseballPlayer::BaseballPlayerImpl::~BaseballPlayerImpl() {}

bool BaseballPlayer::BaseballPlayerImpl::has_baseball() const {
    return baseball;
}

void BaseballPlayer::BaseballPlayerImpl::catch_baseball() {
    assert(!baseball);
    this->baseball = true;
}

void BaseballPlayer::BaseballPlayerImpl::throw_baseball(BaseballPlayer &catch_partner) {
    assert(baseball);
    this->baseball = false;
    catch_partner.catch_baseball();
}

void BaseballPlayer::BaseballPlayerImpl::put_on_mitt(BaseballMitt mitt) {
    this->mitt = std::move(mitt);
}

const BaseballMitt & BaseballPlayer::BaseballPlayerImpl::get_mitt() {
    return mitt;
}
