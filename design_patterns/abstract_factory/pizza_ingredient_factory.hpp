#pragma once
#include "ingredients.hpp"
#include <memory>

class PizzaIngredientFactory {
public:
  virtual std::unique_ptr<Dough> createDough() = 0;
  virtual std::unique_ptr<Sauce> createSauce() = 0;
  virtual std::unique_ptr<Cheese> createCheese() = 0;
  virtual std::unique_ptr<Clam> createClam() = 0;
};
