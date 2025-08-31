#pragma once
#include "subject.hpp"

class WeatherData : public Subject {
public:
  const float &getTemperature() const { return temperature; }
  const float &getHumidity() const { return humidity; }
  const float &getPressure() const { return pressure; }

  void setMeasurements(const float &temperature, const float &humidity,
                       const float &pressure) {
    this->temperature = temperature;
    this->humidity = humidity;
    this->pressure = pressure;
    measurementsChanged();
  }

private:
  float temperature, humidity, pressure;
  void measurementsChanged() const { notifyObservers(); }
};
