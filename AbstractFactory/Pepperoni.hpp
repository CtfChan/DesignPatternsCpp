#pragma once

#include <string>

class Pepperoni {
public:
    virtual std::string toString() = 0;
    virtual ~Pepperoni () = default;
};

class SlicedPepperoni  : public Pepperoni  {
public:
    virtual std::string toString() override {
		return "Sliced Pepperoni ";
    }
};
