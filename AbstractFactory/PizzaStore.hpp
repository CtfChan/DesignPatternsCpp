#pragma once


#include "Pizza.hpp"
#include "PizzaIngredientFactory.hpp"

#include <memory>
#include <string>

class PizzaStore {
protected:
    virtual std::shared_ptr<Pizza> createPizza(std::string type) const = 0;

public:
    std::shared_ptr<Pizza> orderPizza(std::string type) const {
        std::shared_ptr<Pizza> pizza = createPizza(type);
        pizza->prepare();
        pizza->bake();
        pizza->cut();
        pizza->box();
        return pizza;
    }
};

class NYPizzaStore : public PizzaStore {
protected:
    std::shared_ptr<Pizza> createPizza(std::string type) const {
        std::shared_ptr<PizzaIngredientFactory> factory = 
            std::make_shared<NYPizzaIngredientFactory>();
        std::shared_ptr<Pizza> pizza;

        if (type == "cheese") {
            pizza = std::make_shared<CheesePizza>(factory);
            pizza->setName("New York Style Cheese Pizza");
        }

        return pizza;
    }

};




