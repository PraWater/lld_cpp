#pragma once
#include "ingredients.hpp"
#include <iostream>
#include <memory>
#include <string>

class Pizza {
public:
  virtual void prepare() = 0;

  void bake() { std::cout << "Bake for 25 minutes at 350" << std::endl; }

  void cut() {
    std::cout << "Cutting the pizza into diagonal slices" << std::endl;
  }

  void box() {
    std::cout << "Place pizza in official PizzaStore box" << std::endl;
  }

  const std::string &getName() { return name; }

  void setName(std::string name) { this->name = name; }

  virtual ~Pizza() = default;

protected:
  std::string name;
  std::unique_ptr<Dough> dough;
  std::unique_ptr<Sauce> sauce;
  std::unique_ptr<Cheese> cheese;
  std::unique_ptr<Clam> clam;
};
