#pragma once
#include <iostream>

class Lights {
public:
  void on() { std::cout << "Lights are switched on!" << std::endl; }
  void off() { std::cout << "Lights are switched off!" << std::endl; }
  void dim(int n) { std::cout << "Lights are dimmed to " << n << std::endl; }
};
