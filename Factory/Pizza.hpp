#pragma once

#include <string>
#include <vector>
#include <iostream>

class Pizza {
protected:
    std::string name_;
    std::string dough_;
    std::string sauce_;
    std::vector<std::string> toppings_;

public:
    const std::string& getName() const;
    const std::string& getDough() const;
    const std::string& getSauce() const;
    const std::vector<std::string> getToppings() const;

    virtual void prepare() const;
    virtual void bake() const;
    virtual void cut() const;
    virtual void box() const;

};

std::ostream& operator<<(std::ostream& os, const Pizza& pizza);



// NY Pizzas
class NYStyleCheesePizza : public Pizza {
public:
    NYStyleCheesePizza();
};

class NYStyleClamPizza : public Pizza {
public:
    NYStyleClamPizza();
};

class NYStylePepperoniPizza : public Pizza {
public:
    NYStylePepperoniPizza();
};

class NYStyleVeggiePizza : public Pizza {
public:
    NYStyleVeggiePizza();
};


// Chicago
class ChicagoStyleCheesePizza : public Pizza {
public:
    ChicagoStyleCheesePizza();
};

class ChicagoStylePepperoniPizza: public Pizza
{
public:
    ChicagoStylePepperoniPizza();
};

class ChicagoStyleVeggiePizza: public Pizza
{
public:
    ChicagoStyleVeggiePizza();
};

class ChicagoStyleClamPizza : public Pizza {
public:
    ChicagoStyleClamPizza();
};

