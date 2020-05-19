#include "Beverage.hpp"

std::string HouseBlend::getDescription() const {
    return "House blend";
}

double HouseBlend::cost() const {
    return 0.89;
}



std::string DarkRoast::getDescription() const {
    return "Dark roast";
}

double DarkRoast::cost() const {
    return 0.99;
}



std::string Decaf::getDescription() const {
    return "Decaf";
}

double Decaf::cost() const {
    return 1.05;
}



std::string Espresso::getDescription() const {
    return "Expresso";
}

double Espresso::cost() const {
    return 1.99;
}