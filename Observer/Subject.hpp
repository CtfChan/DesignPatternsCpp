#pragma once

// foward declare
class Observer;


class Subject {
public:
    virtual ~Subject() = default;

    virtual void registerObsever(Observer* o) = 0;

    virtual void removeObserver(Observer* o) = 0;

    virtual void notifyObservers() = 0;
};
