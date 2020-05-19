#include "FlyBehaviour.hpp"
#include <iostream>




void FlyNoWay::fly() const {
    std::cout << "I can't fly!" << std::endl;
}



void FlyWithWings::fly() const {
    std::cout << "I'm flying!" << std::endl;
}

void FlyRocketPowered::fly() const {
    std::cout << "I'm flying with a rocket!" << std::endl;
}