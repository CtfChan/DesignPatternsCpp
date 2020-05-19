#pragma once

class Observer {
public:

    virtual ~Observer() = default;

    virtual void update(float temp, float humidity, float pressure) = 0;
};

