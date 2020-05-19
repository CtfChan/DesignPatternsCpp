#pragma once


#include "Subject.hpp"
#include "Observer.hpp"
#include <vector>

class WeatherData : public Subject {
private:
    std::vector<Observer*> observers_;
    float temperature_;
    float humidity_;
    float pressure_;

public:
    WeatherData() = default;

    virtual ~WeatherData() = default;

    virtual void registerObsever(Observer* o) override;

    virtual void removeObserver(Observer* o) override;

    virtual void notifyObservers() override;

    
    void measurementsChanged();


    // setter
    void setMeasurements(float temperature, float humidity, float pressure);
    

    // getters   
    float getTemperature() const;
    
    float getHumidity() const;
    
    float getPressure() const;

};

