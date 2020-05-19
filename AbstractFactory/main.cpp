#include "PizzaIngredientFactory.hpp"
#include "PizzaStore.hpp"
#include "Pizza.hpp"
int main() {
// PizzaStore nyStore = new NYPizzaStore();
// 		PizzaStore chicagoStore = new ChicagoPizzaStore();
 
// 		Pizza pizza = nyStore.orderPizza("cheese");
// 		System.out.println("Ethan ordered a " + pizza + "\n");
 
// 		pizza = chicagoStore.orderPizza("cheese");
// 		System.out.println("Joel ordered a " + pizza + "\n");

//  NYStylePizzaStore ny_pizza_store;
//     PizzaStore &store = ny_pizza_store;

//     std::shared_ptr<Pizza> pizza = store.OrderPizza("cheese");

    auto ny_store = NYPizzaStore();
    auto pizza1 = ny_store.orderPizza("cheese");
    
    return 0;
}