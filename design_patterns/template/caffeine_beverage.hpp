#pragma once
#include <iostream>

class CaffeineBeverage {
public:
  virtual void prepareRecipe() final {
    boilWater();
    brew();
    pourInCup();
    if (customerWantsCondiments()) {
      addCondiments();
    }
  }
  virtual void brew() = 0;

  virtual void addCondiments() = 0;

  virtual bool customerWantsCondiments() { return true; }

  void boilWater() { std::cout << "Boiling water" << std::endl; }

  void pourInCup() { std::cout << "Pouring into cup" << std::endl; }

};
