#pragma once

#include <string>

class Dough {
public:
    virtual std::string toString() = 0;
    virtual ~Dough() = default;
};

class ThickCrustDough : public Dough {
public:
    virtual std::string toString() override {
		return "ThickCrust style extra thick crust dough";
    }
};

class ThinCrustDough : public Dough {
public:
    virtual std::string toString() override {
		return "Thin Crust Dough";
    }
};





