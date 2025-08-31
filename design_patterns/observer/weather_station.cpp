#include "displays/current_display.hpp"
#include "displays/heat_index_display.hpp"
#include "displays/statistics_display.hpp"
#include "weather_data.hpp"

int main() {
  auto weatherData = WeatherData();
  auto currentDisplay = CurrentConditionsDisplay(&weatherData);
  auto statsDisplay = StatisticsDisplay(&weatherData);
  auto heatIndex = HeatIndexDisplay(&weatherData);
  weatherData.setMeasurements(80, 65, 30.4f);
  weatherData.setMeasurements(82, 70, 29.2f);
  weatherData.setMeasurements(78, 90, 29.2f);
  return 0;
}
