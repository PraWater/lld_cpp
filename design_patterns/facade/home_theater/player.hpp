#pragma once
#include <iostream>

class Player {
public:
  void on() { std::cout << "Player is switched on!" << std::endl; }
  void off() { std::cout << "Player is switched off!" << std::endl; }
  void stop() { std::cout << "Player is stopped!" << std::endl; }
  void play(const std::string movie) {
    std::cout << "Playing: " << movie << std::endl;
  }
};
