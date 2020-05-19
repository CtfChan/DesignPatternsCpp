#pragma once

#include <string>

class Sauce {
public:
    virtual std::string toString() = 0;
    virtual ~Sauce() = default;
};

class PlumTomatoSauce : public Sauce {
public:
    virtual std::string toString() override {
		return "Tomato sauce with plum tomatoes";
    }
};

class MarinaraSauce : public Sauce {
public:
    virtual std::string toString() override {
		return "Marinara Sauce";
    }
};
