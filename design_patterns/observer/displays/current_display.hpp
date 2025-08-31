#pragma once
#include "../display_element.hpp"
#include "../observer.hpp"
#include "../subject.hpp"
#include "../weather_data.hpp"
#include <iostream>

class CurrentConditionsDisplay : public DisplayElement, public Observer {
public:
  CurrentConditionsDisplay(Subject *obs) : observable(obs) {
    observable->registerObserver(this);
  }

  void display() override {
    std::cout << "Current conditions: " << temperature << "F degrees and "
              << humidity << "% humidity" << std::endl;
  }

  void update() override {
    if (auto *wd = dynamic_cast<WeatherData *>(observable)) {
      temperature = wd->getTemperature();
      humidity = wd->getHumidity();
      display();
    }
  }

private:
  float temperature, humidity;
  Subject *observable;
};
