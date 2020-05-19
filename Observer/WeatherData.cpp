#include "WeatherData.hpp"
#include "Observer.hpp"
#include <algorithm>

void WeatherData::registerObsever(Observer* o) {
    observers_.push_back(o);
}

void WeatherData::removeObserver(Observer* o) {
    auto it = std::find_if(observers_.begin(), observers_.end(), [&o](const auto& other_obs){
        return other_obs == o;
    });
    observers_.erase(it);
}

void WeatherData::notifyObservers() {
    for (auto obs : observers_) {
        obs->update(temperature_, humidity_, pressure_);
    }
}


void WeatherData::measurementsChanged() {
    notifyObservers();
}

void WeatherData::setMeasurements(float temperature, float humidity, float pressure) {
    temperature_ = temperature;
    humidity_ = humidity;
    pressure_ = pressure;
    measurementsChanged();
}




float WeatherData::getTemperature() const {
    return temperature_;
}

float WeatherData::getHumidity() const {
    return humidity_;
}

float WeatherData::getPressure() const {
    return pressure_;
}