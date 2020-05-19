#pragma once
#include <string>

class Beverage {
public:
    virtual ~Beverage() = default;

    virtual std::string getDescription() const = 0;

    virtual double cost() const = 0;
};


class HouseBlend: public Beverage {
public:
    std::string getDescription() const override;
    double cost() const override;
};


class DarkRoast: public Beverage {
public:
    std::string getDescription() const override;
    double cost() const override;
};


class Espresso: public Beverage {
public:
    std::string getDescription() const override;
    double cost() const override;
};


class Decaf: public Beverage {
public:
    std::string getDescription() const override;
    double cost() const override;
};