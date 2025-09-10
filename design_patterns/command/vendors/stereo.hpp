#pragma once
#include <iostream>

class Stereo {
public:
  void on() { std::cout << "Stereo is on!" << std::endl; }
  void off() { std::cout << "Stereo is off!" << std::endl; }
  void setVolume(int volume) {
    this->volume = volume;
    std::cout << "Stereo is set to " << this->volume << std::endl;
  }
  void setCD() { std::cout << "Stereo is set to CD input!" << std::endl; }

private:
  int volume{0};
};
