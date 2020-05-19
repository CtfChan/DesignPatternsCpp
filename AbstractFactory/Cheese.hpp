#pragma once

#include <string>

class Cheese {
public:
    virtual std::string toString() = 0;
    virtual ~Cheese() = default;
};

class MozzarellaCheese : public Cheese {
public:
    virtual std::string toString() override {
		return "Shredded Mozzarella";
    }
};

class ReggianoCheese : public Cheese {
public:
    virtual std::string toString() override {
		return "Reggiano Cheese";
    }
};