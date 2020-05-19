#include "CondimentDecorator.hpp"

Milk::Milk(std::unique_ptr<Beverage> beverage) : CondimentDecorator(std::move(beverage)) {}

std::string Milk::getDescription() const {
    return beverage_->getDescription() + ", Steamed Milk";
}

double Milk::cost() const {
    return beverage_->cost() + 0.10;
}




Mocha::Mocha(std::unique_ptr<Beverage> beverage) : CondimentDecorator(std::move(beverage)) {}

std::string Mocha::getDescription() const {
    return beverage_->getDescription() + ", Mocha";
}

double Mocha::cost() const {
    return beverage_->cost() + 0.20;
}




Soy::Soy(std::unique_ptr<Beverage> beverage) : CondimentDecorator(std::move(beverage)) {}

std::string Soy::getDescription() const {
    return beverage_->getDescription() + ", Soy";
}

double Soy::cost() const {
    return beverage_->cost() + 0.15;
}



Whip::Whip(std::unique_ptr<Beverage> beverage) : CondimentDecorator(std::move(beverage)) {}

std::string Whip::getDescription() const {
    return beverage_->getDescription() + ", Whip";
}

double Whip::cost() const {
    return beverage_->cost() + 0.10;
}





