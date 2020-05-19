#pragma once

class QuackBehaviour {
public:
    virtual void quack() const = 0;
    
    virtual ~QuackBehaviour() = default;

};


class Quack : public QuackBehaviour {
public:
    void quack() const override;
};


class Squeak : public QuackBehaviour {
public:
    void quack() const override;

};

class MuteQuack : public QuackBehaviour{
public:
    void quack() const override;
};