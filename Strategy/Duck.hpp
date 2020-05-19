#pragma once

#include "FlyBehaviour.hpp"
#include "QuackBehaviour.hpp"

#include <memory>

class Duck {
private:
    std::unique_ptr<FlyBehaviour> fly_behaviour_;
    std::unique_ptr<QuackBehaviour> quack_behaviour_;

public:

    Duck(std::unique_ptr<FlyBehaviour> fly_behaviour, std::unique_ptr<QuackBehaviour> quack_behavior);

    virtual ~Duck() = default;

    void swim() const;

    virtual void display() const = 0;

    void performQuack() const;

    void performFly() const;

    // Note: these set functions will move the function input ptr to private ptr
    void setFlyBehaviour(std::unique_ptr<FlyBehaviour> fly_behaviour);

    void setQuackBehaviour(std::unique_ptr<QuackBehaviour> quack_behavior);
 
};



class MallardDuck : public Duck {
public:
    MallardDuck();

    void display() const override;
};


class RedheadDuck : public Duck {
public:
    RedheadDuck();

    void display() const override;
};




class RubberDuck : public Duck {
public:
    RubberDuck();

    void display() const override;
};


class DecoyDuck : public Duck {
public:
    DecoyDuck();

    void display() const override;
};



class ModelDuck : public Duck {
public:
    ModelDuck();

    void display() const override;
};
