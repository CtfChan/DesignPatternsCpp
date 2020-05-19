#pragma once

#include <string>

class Clams {
public:
    virtual std::string toString() = 0;
    virtual ~Clams() = default;
};

class FreshClams : public Clams {
public:
    virtual std::string toString() override {
        return "Fresh Clams from Long Island Sound";
    }
};

class FrozenClams : public Clams {
public:
    virtual std::string toString() override {
		return "Frozen Clams from Chesapeake Bay";
    }
};

