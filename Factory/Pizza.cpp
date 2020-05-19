#include "Pizza.hpp"
#include <ostream>

// base class
const std::string& Pizza::getName() const {
    return name_;
}

const std::string& Pizza::getDough() const {
    return dough_;
}

const std::string& Pizza::getSauce() const {
    return sauce_;
}

const std::vector<std::string> Pizza::getToppings() const {
    return toppings_;
}

void Pizza::prepare() const {
    std::cout << "Preparing " + getName() << std::endl;
    std::cout << "Tossing dough..." << std::endl;
    std::cout << "Adding sauce..." << std::endl;
    std::cout << "Adding toppings: " << std::endl;
    for (const auto& topping : toppings_) {
        std::cout << "  " + topping  << std::endl;
    }
}

void Pizza::bake() const {
    std::cout << "Baking for 25min at 350 degrees " << std::endl;
}

void Pizza::cut() const {
    std::cout << "Cut the pizza into diagonal slices "<< std::endl;
}

void Pizza::box() const {
    std::cout << "Boxing in official PizzaStore boxes" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Pizza& pizza) {
     std::string str;

    str = "\n---- " + pizza.getName() + "----\n";
    str.append(pizza.getDough() + "\n");
    str.append(pizza.getSauce() + "\n");

    for (auto& topping : pizza.getToppings())
    {
        str.append("  " + topping + "\n");
    }

    str.append("\n");

    return os << str;
}



// NY pizzas

NYStyleCheesePizza::NYStyleCheesePizza() {
    name_ = "NY Style sauce and cheese pizza";
    dough_ = "Thin crust dough";
    sauce_ = "Marinara sauce";

    toppings_.push_back("Gratted reggiano cheese");
}

NYStyleClamPizza::NYStyleClamPizza() {
    name_ = "NY Style Clam Pizza";
    dough_ = "Thin Crust Dough";
    sauce_ = "Marinara Sauce";

    toppings_.push_back("Grated Reggiano Cheese");
    toppings_.push_back("Fresh Clams from Long Island Sound");
}

NYStylePepperoniPizza::NYStylePepperoniPizza() {
    name_ = "NY Style Pepperoni Pizza";
    dough_ = "Thin Crust Dough";
    sauce_ = "Marinara Sauce";

    toppings_.push_back("Grated Reggiano Cheese");
    toppings_.push_back("Sliced Pepperoni");
    toppings_.push_back("Garlic");
    toppings_.push_back("Onion");
    toppings_.push_back("Mushrooms");
    toppings_.push_back("Red Pepper");
}

NYStyleVeggiePizza::NYStyleVeggiePizza() {
    name_ = "NY Style Veggie Pizza";
    dough_ = "Thin Crust Dough";
    sauce_ = "Marinara Sauce";

    toppings_.push_back("Grated Reggiano Cheese");
    toppings_.push_back("Garlic");
    toppings_.push_back("Onion");
    toppings_.push_back("Mushrooms");
    toppings_.push_back("Red Pepper");
}


// Chicago pizzas

ChicagoStyleCheesePizza::ChicagoStyleCheesePizza() {
    name_ = "Chicago Style Deep Dish Cheese Pizza";
    dough_ = "Extra Thick Crust Dough";
    sauce_ = "Plum Tomato Sauce";

    toppings_.push_back("Shredded Mozzarella Cheese");
}

ChicagoStyleClamPizza::ChicagoStyleClamPizza() {
    name_ = "Chicago Style Clam Pizza";
    dough_ = "Extra Thick Crust Dough";
    sauce_ = "Plum Tomato Sauce";

    toppings_.push_back("Shredded Mozzarella Cheese");
    toppings_.push_back("Frozen Clams from Chesapeake Bay");
}



ChicagoStylePepperoniPizza::ChicagoStylePepperoniPizza() {
    name_ = "Chicago Style Pepperoni Pizza";
    dough_ = "Extra Thick Crust Dough";
    sauce_ = "Plum Tomato Sauce";

    toppings_.push_back("Shredded Mozzarella Cheese");
    toppings_.push_back("Black Olives");
    toppings_.push_back("Spinach");
    toppings_.push_back("Eggplant");
    toppings_.push_back("Sliced Pepperoni");
}


ChicagoStyleVeggiePizza::ChicagoStyleVeggiePizza() {
    name_ = "Chicago Deep Dish Veggie Pizza";
    dough_ = "Extra Thick Crust Dough";
    sauce_ = "Plum Tomato Sauce";

    toppings_.push_back("Shredded Mozzarella Cheese");
    toppings_.push_back("Black Olives");
    toppings_.push_back("Spinach");
    toppings_.push_back("Eggplant");
}













