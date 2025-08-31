#pragma once
#include "../display_element.hpp"
#include "../observer.hpp"
#include "../subject.hpp"
#include "../weather_data.hpp"
#include <algorithm>
#include <iostream>

class StatisticsDisplay : public DisplayElement, public Observer {
public:
  StatisticsDisplay(Subject *obs) : observable(obs) {
    observable->registerObserver(this);
  }

  void display() override {
    std::cout << "Avg/Max/Min temperature = " << (tempSum / numReadings) << "/"
              << maxTemp << "/" << minTemp << std::endl;
  }

  void update() override {
    if (auto *wd = dynamic_cast<WeatherData *>(observable)) {
      float temperature = wd->getTemperature();
      minTemp = std::min(minTemp, temperature);
      maxTemp = std::max(maxTemp, temperature);
      tempSum += temperature;
      ++numReadings;
      display();
    }
  }

private:
  float minTemp{200}, maxTemp{0}, tempSum{0};
  int numReadings{0};
  Subject *observable;
};
