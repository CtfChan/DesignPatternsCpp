#pragma once

#include "Pizza.hpp"

#include <memory>

class PizzaStore {
public:
    std::unique_ptr<Pizza> orderPizza(std::string type);

    virtual std::unique_ptr<Pizza> makePizza(std::string type) = 0;
};

class NYPizzaStore : public PizzaStore {
public:
    std::unique_ptr<Pizza> makePizza(std::string type);
};

class ChicagoPizzaStore : public PizzaStore {
public:
    std::unique_ptr<Pizza> makePizza(std::string type);
};
