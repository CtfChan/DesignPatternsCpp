#pragma once

#include "Beverage.hpp"

#include <memory>

class CondimentDecorator : public Beverage {
protected:
    std::unique_ptr<Beverage> beverage_; // protected so that subclasses can access

    CondimentDecorator(std::unique_ptr<Beverage> beverage) : beverage_(std::move(beverage)) {}
};


class Milk : public CondimentDecorator {
public:
    Milk(std::unique_ptr<Beverage> beverage);

    std::string getDescription() const override;

    double cost() const override;
};


class Mocha : public CondimentDecorator {
public:
    Mocha(std::unique_ptr<Beverage> beverage);

    std::string getDescription() const override;

    double cost() const override;
};


class Soy : public CondimentDecorator {
public:
    Soy(std::unique_ptr<Beverage> beverage);

    std::string getDescription() const override;

    double cost() const override;
};


class Whip : public CondimentDecorator {
public:
    Whip(std::unique_ptr<Beverage> beverage);

    std::string getDescription() const override;

    double cost() const override;
};


