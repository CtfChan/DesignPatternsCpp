#include "WeatherData.hpp"
#include "Display.hpp"
#include <iostream>

void WeatherStation()
{
    WeatherData weather_data;
    CurrentConditionsDisplay curr_disp(weather_data);
    StatisticsDisplay stat_disp(weather_data);
    ForecastDisplay forecast_disp(weather_data);

    weather_data.setMeasurements(80.f, 65.f, 30.4f);
    weather_data.setMeasurements(82.f, 70.f, 29.2f);
    weather_data.setMeasurements(78.f, 90.f, 29.2f);
}

void WeatherStationHeatIndex()
{
    WeatherData weather_data;
    CurrentConditionsDisplay curr_disp(weather_data);
    StatisticsDisplay stat_disp(weather_data);
    ForecastDisplay forecast_disp(weather_data);
    HeatIndexDisplay heat_disp(weather_data);

    weather_data.setMeasurements(80.f, 65.f, 30.4f);
    weather_data.setMeasurements(82.f, 70.f, 29.2f);
    weather_data.setMeasurements(78.f, 90.f, 29.2f);
}

int main() {

    std::cout << " ============= WeatherStation ============" << std::endl;
    WeatherStation();
    std::cout << " ============= WeatherStationHeatIndex ============" << std::endl;
    WeatherStationHeatIndex();


    return 0;

}