#pragma once
#include "caffeine_beverage.hpp"

class CoffeeWithHook : public CaffeineBeverage {
public:
  void brew() override {
    std::cout << "Dripping Coffee through filter" << std::endl;
  }
  void addCondiments() override {
    std::cout << "Adding Sugar and Milk" << std::endl;
  }

  bool customerWantsCondiments() override {
    std::cout << "Would you like milk and sugar with your coffee (y/n)? ";
    char answer;
    std::cin >> answer;
    return answer == 'y';
  }
};
