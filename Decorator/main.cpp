#include "CondimentDecorator.hpp"
#include "Beverage.hpp"

#include <iostream>

int main() { 

    Espresso bev1;
    std::cout << bev1.getDescription() << " $" << bev1.cost() << std::endl;

    std::unique_ptr<Beverage> bev2 = std::make_unique<DarkRoast>();
    bev2 = std::make_unique<Mocha>(std::move(bev2));
    bev2 = std::make_unique<Mocha>(std::move(bev2));
    bev2 = std::make_unique<Whip>(std::move(bev2));
    std::cout << bev2->getDescription() << " $" << bev2->cost() << std::endl;

    std::unique_ptr<Beverage> bev3 = std::make_unique<HouseBlend>();
    bev3 = std::make_unique<Soy>(std::move(bev3));
    bev3 = std::make_unique<Mocha>(std::move(bev3));
    bev3 = std::make_unique<Whip>(std::move(bev3));
    std::cout << bev3->getDescription() << " $" << bev3->cost() << std::endl;

    return 0;
}