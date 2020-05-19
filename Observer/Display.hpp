#include "Observer.hpp"
#include "DisplayElement.hpp"
#include "WeatherData.hpp"

//// ForecastDisplay
class ForecastDisplay : public Observer, public DisplayElement {
private:
    float current_pressure_ = 29.92f;
    float last_pressure_ = 0.0f; 
    Subject& weather_data_;

public:
    explicit ForecastDisplay(Subject& in_weather_data);
    
    ~ForecastDisplay();

    void update(float temp, float humidity, float pressure) override;

    void display() const override;
};

//// HeatIndexDisplay
class HeatIndexDisplay : public Observer, public DisplayElement {
private:
    float heat_index_ = 0.0f;
    Subject& weather_data_;

    float computeHeadIndex(float t, float rh) const;

public:
    explicit HeatIndexDisplay(Subject& in_weather_data);
    
    ~HeatIndexDisplay();

    void update(float temperature, float humidity, float pressure) override;

    void display() const override;

};

//// StatisticsDisplay
class StatisticsDisplay : public Observer, public DisplayElement {
private: 
    float max_temp_ = 0.0f;
    float min_temp_ = 200.f;
    float temp_sum_ = 0.0f;
    int num_readings_ = 0;
    Subject& weather_data_;

public:
    explicit StatisticsDisplay(Subject& in_weather_data);

    ~StatisticsDisplay();

    void update(float temperature, float humidity, float pressure) override;
    
    void display() const override;
};

//// CurrentConditionsDisplay
class CurrentConditionsDisplay : public Observer, public DisplayElement {
private:
    float temperature_ = 0.0f;
    float humidity_ = 0.0f;
    Subject& weather_data_;

public:
    explicit CurrentConditionsDisplay(Subject& in_weather_data);
    
    ~CurrentConditionsDisplay();

    void update(float temperature, float humidity, float pressure) override;

    void display() const override;
};



