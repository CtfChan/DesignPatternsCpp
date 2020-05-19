#pragma once

#include <memory>
#include <mutex>


class Singleton {
private:
    Singleton() = default;
    ~Singleton() = default;
public:
    Singleton() = delete;

    // aka Meyer's singleton
    // by using static, instance will not be created until the first call to getInstance()
    static Singleton& getInstance() {
        static Singleton instance;
        return instance;
    }
};


