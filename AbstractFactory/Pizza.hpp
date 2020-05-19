#pragma once 

#include <string>
#include <iostream>

#include "PizzaIngredientFactory.hpp"

class Pizza {
 protected:
    std::string name_;
    std::shared_ptr<Dough> dough_;
    std::shared_ptr<Sauce> sauce_;
    std::shared_ptr<Cheese> cheese_;
    std::vector< std::shared_ptr<Veggies> > veggies_;
    std::shared_ptr<Clams> clam_;

public:
    virtual void prepare() = 0;

    void bake() const {
        std::cout << "Bake for 12 minutes at 300" << std::endl;
    }

    void cut() const {
        std::cout << "Cutting the Pizza!" << std::endl;
    }
    
    void box() const {
        std::cout << "Boxing the Pizza!" << std::endl;
    }
    
    std::string getName() const {
        return name_;
    }
    
    void setName(std::string name) {
        name_ = name;
    }

};

class CheesePizza : public Pizza {
private:
    std::shared_ptr<PizzaIngredientFactory> factory_;
    
public:
    CheesePizza(std::shared_ptr<PizzaIngredientFactory> factory) : factory_(factory) {}

    void prepare() {
        std::cout << "Preparing " + name_ << std::endl;
        dough_ = factory_->createDough();
        sauce_ = factory_->createSauce();
        cheese_ = factory_->createCheese();
        clam_ = factory_->createClams();
    }
};
