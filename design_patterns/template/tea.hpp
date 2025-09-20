#pragma once
#include "caffeine_beverage.hpp"

class Tea : public CaffeineBeverage {
public:
  void brew() override { std::cout << "Steeping the tea" << std::endl; }
  void addCondiments() override { std::cout << "Adding Lemon" << std::endl; }
};
