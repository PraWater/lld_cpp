#pragma once
#include <iostream>

class Popper {
public:
  void on() { std::cout << "Popper is switched on!" << std::endl; }
  void off() { std::cout << "Popper is switched off!" << std::endl; }
  void pop() { std::cout << "Making popcorn!" << std::endl; }
};
