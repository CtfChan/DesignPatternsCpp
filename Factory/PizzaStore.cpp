#include "PizzaStore.hpp"
#include "Pizza.hpp"

std::unique_ptr<Pizza> PizzaStore::orderPizza(std::string type) {
    std::unique_ptr<Pizza> pizza = makePizza(type);

    if (pizza != nullptr) {
        std::cout << "\n--- Making a " + pizza->getName() + " ---\n \n";
        pizza->prepare();
        pizza->bake();
        pizza->cut();
        pizza->box();
    }
    else {
        std::cout << "Not a valid pizza type. I don't know how to make this pizza!!" << std::endl;
    }

    return pizza;
}




std::unique_ptr<Pizza> NYPizzaStore::makePizza(std::string type)
{
    std::unique_ptr<Pizza> pizza = nullptr;

    if (type == "cheese") {
        pizza = std::make_unique<NYStyleCheesePizza>();
    } else if (type == "clam") {
        pizza = std::make_unique<NYStyleClamPizza>();
    } else if (type == "pepperoni") {
        pizza = std::make_unique<NYStylePepperoniPizza>();
    } else if (type == "veggie") {
        pizza = std::make_unique<NYStyleVeggiePizza>();
    }

    return pizza;
}



std::unique_ptr<Pizza> ChicagoPizzaStore::makePizza(std::string type)
{
    std::unique_ptr<Pizza> pizza = nullptr;

    if (type == "cheese") {
        pizza = std::make_unique<ChicagoStyleCheesePizza>();
    } else if (type == "clam") {
        pizza = std::make_unique<ChicagoStyleClamPizza>();
    } else if (type == "pepperoni") {
        pizza = std::make_unique<ChicagoStylePepperoniPizza>();
    } else if (type == "veggie") {
        pizza = std::make_unique<ChicagoStyleVeggiePizza>();
    }
    return pizza;
}
