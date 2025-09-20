#pragma once
#include <iostream>

class Screen {
public:
  void down() { std::cout << "Screen is drawn down!" << std::endl; }
  void up() { std::cout << "Screen is drawn up!" << std::endl; }
};
