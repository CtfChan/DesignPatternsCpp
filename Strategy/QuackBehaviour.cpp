#include "QuackBehaviour.hpp"
#include <iostream>


void Quack::quack() const {
    std::cout << "Quack" << std::endl;
}


void Squeak::quack() const {
    std::cout << "Squeak" << std::endl;
}

void MuteQuack::quack() const {
    std::cout << "Silence" << std::endl;
}