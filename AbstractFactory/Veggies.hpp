#pragma once

#include <string>

class Veggies {
public:
    virtual std::string toString() = 0;
    virtual ~Veggies() = default;
};


class Spinach : public Veggies {
public:
    virtual std::string toString() override {
		return "Spinach";
    }
};



class Garlic : public Veggies {
public:
    virtual std::string toString() override {
		return "Garlic";
    }
};


class Onion : public Veggies {
public:
    virtual std::string toString() override {
		return "Onion";
    }
};


class Eggplant : public Veggies {
public:
    virtual std::string toString() override {
		return "Eggplant";
    }
};

class BlackOlives : public Veggies {
public:
    virtual std::string toString() override {
		return "Black Olives";
    }
};

class Mushroom : public Veggies {
public:
    virtual std::string toString() override {
		return "Mushroom";
    }
};

class RedPepper : public Veggies {
public:
    virtual std::string toString() override {
		return "Red Pepper";
    }
};


