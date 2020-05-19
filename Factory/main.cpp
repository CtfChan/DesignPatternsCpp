#include "PizzaStore.hpp"
#include "Pizza.hpp"

int main() {
    auto ny_store = NYPizzaStore();
    auto chicago_store = ChicagoPizzaStore();

    auto pizza1 = ny_store.orderPizza("cheese");
    std::cout << "\n ----- Opening box ----- \n" << std::endl;
    std::cout << "Ethan ordered a " << (*pizza1) << std::endl; 
    

    auto pizza2 = chicago_store.orderPizza("cheese");
    std::cout << "\n ----- Opening box ----- \n" << std::endl;
    std::cout << "Joel ordered a " << (*pizza2) << std::endl; 


    return 0;
}