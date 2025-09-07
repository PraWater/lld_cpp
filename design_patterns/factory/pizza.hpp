#pragma once
#include <iostream>
#include <string>
#include <vector>

class Pizza {
public:
  void prepare() {
    std::cout << "Preparing " << name << std::endl
              << "Tossing dough..." << std::endl
              << "Adding sauce..." << std::endl
              << "Adding toppings: " << std::endl;
    for (std::string topping : toppings) {
      std::cout << "   " + topping << std::endl;
    }
  }

  void bake() { std::cout << "Bake for 25 minutes at 350" << std::endl; }

  void cut() {
    std::cout << "Cutting the pizza into diagonal slices" << std::endl;
  }

  void box() {
    std::cout << "Place pizza in official PizzaStore box" << std::endl;
  }

  const std::string &getName() { return name; }

protected:
  std::string name;
  std::string dough;
  std::string sauce;
  std::vector<std::string> toppings;
};
