#include "Display.hpp"

#include <iostream>
#include <limits>


//// ForecastDisplay
ForecastDisplay::ForecastDisplay(Subject& in_weather_data) : 
        weather_data_(in_weather_data) {
    weather_data_.registerObsever(this);
}

ForecastDisplay::~ForecastDisplay() {
    weather_data_.removeObserver(this);
}

void ForecastDisplay::update(float temp, float humidity, float pressure) {
    last_pressure_ = current_pressure_;
    current_pressure_ = pressure;
    display();
}

void ForecastDisplay::display() const {
    std::cout << "Forecast: ";
    if (current_pressure_ > last_pressure_) {
        std::cout << "Improving weather on the way!" << std::endl;
    } else if (std::abs(current_pressure_ - last_pressure_) < 
            std::numeric_limits<float>::epsilon() ){
        std::cout << "More of the same" << std::endl;
    } else {
        std::cout << "Watch out for cooler, rainy weather" << std::endl;
    }
}

//// HeatIndexDisplay
HeatIndexDisplay::HeatIndexDisplay(Subject& in_weather_data) 
        : weather_data_(in_weather_data) {
    weather_data_.registerObsever(this);
}

HeatIndexDisplay::~HeatIndexDisplay() {
    weather_data_.removeObserver(this);
}

void HeatIndexDisplay::update(float temperature, float humidity, float pressure) {
    heat_index_ = computeHeadIndex(temperature, humidity);
    display();
}

float HeatIndexDisplay::computeHeadIndex(float t, float rh) const {
    float index = static_cast<float>((16.923 + (0.185212 * t) + (5.37941 * rh) - (0.100254 * t * rh)
                        + (0.00941695 * (t * t)) + (0.00728898 * (rh * rh))
                        + (0.000345372 * (t * t * rh)) - (0.000814971 * (t * rh * rh)) +
                        (0.0000102102 * (t * t * rh * rh)) - (0.000038646 * (t * t * t)) + (0.0000291583 *
                                                                                            (rh * rh * rh)) + (0.00000142721 * (t * t * t * rh)) +
                        (0.000000197483 * (t * rh * rh * rh)) - (0.0000000218429 * (t * t * t * rh * rh)) +
                        0.000000000843296 * (t * t * rh * rh * rh)) -
                        (0.0000000000481975 * (t * t * t * rh * rh * rh)));
    return index;
}

void HeatIndexDisplay::display() const {
    std::cout << "Heat index is " << heat_index_ << std::endl;
}
  

//// StatisticsDisplay
StatisticsDisplay::StatisticsDisplay(Subject& in_weather_data) 
        : weather_data_(in_weather_data) {
    weather_data_.registerObsever(this);
}

StatisticsDisplay::~StatisticsDisplay() {
    weather_data_.removeObserver(this);
}

void StatisticsDisplay::update(float temperature, float humidity, float pressure) {
    temp_sum_ += temperature;
    ++num_readings_;

    max_temp_ = std::max(max_temp_, temperature);
    min_temp_ = std::min(min_temp_, temperature);

    display();
}
    
void StatisticsDisplay::display() const {
    std::cout << "Avg/Max/Min temperature = " << (temp_sum_ / num_readings_) << "/" <<
                max_temp_ << "/" << min_temp_ << std::endl;
}


//// CurrentConditionsDisplay
CurrentConditionsDisplay::CurrentConditionsDisplay(
        Subject& in_weather_data) : weather_data_(in_weather_data) {
    weather_data_.registerObsever(this);
}

CurrentConditionsDisplay::~CurrentConditionsDisplay() {
    weather_data_.removeObserver(this);
}

void CurrentConditionsDisplay::update(float temperature, float humidity, float pressure) {
    temperature_ = temperature;
    humidity_ = humidity;
    display();
}

void CurrentConditionsDisplay::display() const {
    std::cout << "Current conditions: " << temperature_ << "F degrees and "<<
             humidity_ << "% humidity" << std::endl;
}

