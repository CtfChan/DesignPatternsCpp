#pragma once

#include "Clams.hpp"
#include "Dough.hpp"
#include "Sauce.hpp"
#include "Cheese.hpp"
#include "Veggies.hpp"
#include "Pepperoni.hpp"

#include <vector>
#include <memory>

class PizzaIngredientFactory {
public:

    virtual std::shared_ptr<Dough> createDough() = 0;
    virtual std::shared_ptr<Sauce> createSauce() = 0;
    virtual std::shared_ptr<Cheese> createCheese() = 0;
    virtual std::vector<std::shared_ptr<Veggies> > createVeggies() = 0;
    virtual std::shared_ptr<Pepperoni> createPepperoni() = 0;
    virtual std::shared_ptr<Clams> createClams() = 0;

    virtual ~PizzaIngredientFactory() = default;
};


class NYPizzaIngredientFactory : public PizzaIngredientFactory {
    virtual std::shared_ptr<Dough> createDough() override {
        return std::make_shared<ThinCrustDough>();
    }

    virtual std::shared_ptr<Sauce> createSauce() override {
        return std::make_shared<MarinaraSauce>();
    }

    virtual std::shared_ptr<Cheese> createCheese() override {
        return std::make_shared<ReggianoCheese>();
    }

    virtual std::vector<std::shared_ptr<Veggies> > createVeggies() override {
        return { std::make_shared<Garlic>(), 
                 std::make_shared<Onion>(), 
                 std::make_shared<Mushroom>(), 
                 std::make_shared<RedPepper>()};
    }

    virtual std::shared_ptr<Pepperoni> createPepperoni() override {
        return std::make_shared<SlicedPepperoni>();
    }

    virtual std::shared_ptr<Clams> createClams() override {
        return std::make_shared<FreshClams>();
    }
};