#include "Alien.h"
#include "BaseballPlayer.h"
#include "BaseballMitt.h"
#include <unistd.h>
#include <thread>
#include <memory>
#include <mutex>
#include <iostream>
#include <assert.h>

#   define ASSERT(condition, message) \
    do { \
        if (! (condition)) { \
            std::cerr << "Assertion `" #condition "` failed in " << __FILE__ \
                      << " line " << __LINE__ << ": " << message << std::endl; \
            std::terminate(); \
        } \
    } while (false)

// This is the max values represented by the default_entity_type enum in "Entity.h"
#define DEFAULT_TYPES_LIMIT 4

template <typename T>
void test_named_obj(const char name[]) {

    std::string a_name(name);
    T a(name);

    ASSERT(a.get_name() == a_name, "get_name() FAILURE");

    // initialization
    ASSERT(a.get_name() == "Andrew", "get_name() FAILURE");
    ASSERT(a.get_type() < DEFAULT_TYPES_LIMIT, "get_type() FAILURE");

    // Set methods
    a.set_name("Michael");
    ASSERT(a.get_name() == "Michael", "get_name() FAILURE");

    a.set_type(42);
    ASSERT(a.get_type() == 42, "get_type() FAILURE");

}

template <>
void test_named_obj<BaseballPlayer>(const char name[]) {

    std::string a_name(name);
    BaseballPlayer a(name);

    // Initializations
    ASSERT(a.get_name() == a_name, "get_name() FAILURE");
    ASSERT(a.get_type() < DEFAULT_TYPES_LIMIT, "get_type() FAILURE");

    // Set methods
    a.set_name("Michael");
    ASSERT(a.get_name() == "Michael", "get_name() FAILURE");

    a.set_type(42);
    ASSERT(a.get_type() == 42, "get_type() FAILURE");

    // BaseballPlayer special functions
    ASSERT(!a.has_baseball(), "has_baseball() FAILURE");

    // Put on Mitt
    BaseballMitt mitt("Brown");
    a.put_on_mitt(mitt);
    ASSERT(a.get_mitt().get_color() == "Brown", "get_mitt() FAILURE");

    // Catch test
    a.catch_baseball();
    ASSERT(a.has_baseball(), "catch_baseball() failure");

    // Throw test
    BaseballPlayer b("Michael");
    a.throw_baseball(b);
    ASSERT(b.has_baseball(), "throw_baseball failure");

    // num_catches test
    ASSERT(++a.num_catches == 1, "static variable num_catches failure");
}

template <typename T>
void test_unamed_obj(const char color[]) {

    std::string a_color(color);
    T a(color);

    //initialization
    ASSERT(a.get_color() == a_color, "get_color() FAILURE");
    ASSERT(a.get_type() < DEFAULT_TYPES_LIMIT, "get_type() FAILURE");

    // Set methods
    a.set_color("Green");
    ASSERT(a.get_color() == "Green", "get_color() FAILURE");

    a.set_type(42);
    ASSERT(a.get_type() == 42, "get_type() FAILURE");

    // test static function
    a.print_maker();

}

int main(void) {

    // Test Human
    test_named_obj<Human>("Andrew");

    // Test Alien
    test_named_obj<foreign_life::Alien>("Andrew");

    // Test BaseballMitt
    test_unamed_obj<BaseballMitt>("Black");

    // Test BaseballPlayer
    test_named_obj<BaseballPlayer>("Andrew");

    std::cout << "Tests successful!!" << std::endl;

    return 0;
}
