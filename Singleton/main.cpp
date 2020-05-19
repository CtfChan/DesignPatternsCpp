#include "Singleton.hpp"

#include <iostream>

int main() {
    std::cout << "Singleton with references, all 4 below should be the same" << std::endl;
    std::cout << "Singleton instance is: " << &(Singleton::getInstance()) << std::endl;
    std::cout << "Singleton instance is: " << &(Singleton::getInstance()) << std::endl;
    std::cout << "Singleton instance is: " << &(Singleton::getInstance()) << std::endl;
    std::cout << "Singleton instance is: " << &(Singleton::getInstance()) << std::endl;

    return 0;
}