#pragma once

class FlyBehaviour {
public:
    virtual void fly() const = 0;

    virtual ~FlyBehaviour() = default;
};


class FlyWithWings : public FlyBehaviour {
public:
    virtual void fly() const override;

};


class FlyNoWay : public FlyBehaviour {
public:
    virtual void fly() const override;
};


class FlyRocketPowered: public FlyBehaviour {
public:
    virtual void fly() const override;
};


