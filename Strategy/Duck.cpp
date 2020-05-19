
#include "Duck.hpp"
#include <iostream>

// Duck base class

Duck::Duck(std::unique_ptr<FlyBehaviour> fly_behaviour, std::unique_ptr<QuackBehaviour> quack_behavior) :
    fly_behaviour_(std::move(fly_behaviour)),
    quack_behaviour_(std::move(quack_behavior)) {}

void Duck::swim() const {
    std::cout << "All ducks float, even decoys!" << std::endl;
}

void Duck::performQuack() const {
    quack_behaviour_->quack();
}

void Duck::performFly() const {
    fly_behaviour_->fly();
}

void Duck::setFlyBehaviour(std::unique_ptr<FlyBehaviour> fly_behaviour) {
    fly_behaviour_ = std::move(fly_behaviour);
}

void setQuackBehaviour(std::unique_ptr<QuackBehaviour> quack_behavior) {
    quack_behavior =  std::move(quack_behavior);
}


// MallardDuck class
MallardDuck::MallardDuck() :
    Duck(std::make_unique<FlyWithWings>(), std::make_unique<Quack>()) {}

void MallardDuck::display() const {
    std::cout << "I'm a real mallard duck" << std::endl;
}


// RedheadDuck class
RedheadDuck::RedheadDuck() :
    Duck(std::make_unique<FlyWithWings>(), std::make_unique<Quack>()) {}

void RedheadDuck::display() const {
    std::cout << "I'm a real red headed duck" << std::endl;
}


// RubberDuck class
RubberDuck::RubberDuck() :
    Duck(std::make_unique<FlyNoWay>(), std::make_unique<Squeak>()) {}

void RubberDuck::display() const {
    std::cout << "I'm a rubber duckie" << std::endl;
}



// DecoyDuck class
DecoyDuck::DecoyDuck() :
    Duck(std::make_unique<FlyNoWay>(), std::make_unique<MuteQuack>()) {}

void DecoyDuck::display() const {
    std::cout << "I'm just a decoy duck" << std::endl;
}


// ModelDuck class
ModelDuck::ModelDuck() : 
    Duck(std::make_unique<FlyNoWay>(), std::make_unique<Quack>()) {}

void ModelDuck::display() const {
    std::cout << "I'm a model duck" << std::endl;
}



