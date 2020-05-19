
#include <iostream>

#include "Duck.hpp"

int main() {
    std::cout << "Starting Duck Simulator!" << std::endl << std::endl;

    MallardDuck mallard;
    mallard.display();
    mallard.swim();
    mallard.performQuack();
    mallard.performFly();
    
    std::cout << std::endl;
    
    RedheadDuck redhead;
    redhead.display();
    redhead.swim();
    redhead.performQuack();
    redhead.performFly();
    
    std::cout << std::endl;

    DecoyDuck decoy;
    decoy.display();
    decoy.swim();
    decoy.performQuack();
    decoy.performFly();
    
    std::cout << std::endl;

    RubberDuck rubber_duckie;
    rubber_duckie.display();
    rubber_duckie.swim();
    rubber_duckie.performQuack();
    rubber_duckie.performFly();
    
    std::cout << std::endl;



    ModelDuck model;
    model.display();
    model.swim();
    model.performQuack();
    model.performFly();
    std::cout << "Adding rocket power to model duck ... " << std::endl;
    model.setFlyBehaviour(std::make_unique<FlyRocketPowered>());
    model.performFly();

    return 0;
}