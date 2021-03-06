#include "BaseballPlayerImpl.h"
#include <cassert>

BaseballPlayer::BaseballPlayerImpl::BaseballPlayerImpl(std::string a_name) :
    Human(std::move(a_name))
{}

BaseballPlayer::BaseballPlayerImpl::~BaseballPlayerImpl() {}

bool BaseballPlayer::BaseballPlayerImpl::has_baseball() const {
    return has_baseball_;
}

void BaseballPlayer::BaseballPlayerImpl::catch_baseball() {
    assert(!has_baseball_);
    has_baseball_ = true;
}

void BaseballPlayer::BaseballPlayerImpl::throw_baseball(BaseballPlayer &catch_partner) {
    assert(has_baseball_);
    has_baseball_ = false;
    catch_partner.catch_baseball();
}

void BaseballPlayer::BaseballPlayerImpl::put_on_mitt(BaseballMitt mitt) {
    mitt_ = std::move(mitt);
}

const BaseballMitt & BaseballPlayer::BaseballPlayerImpl::get_mitt() {
    return mitt_;
}
