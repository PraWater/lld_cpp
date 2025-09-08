#pragma once
#include "../pizza_ingredient_factory.hpp"

class ChicagoPizzaIngredientFactory : public PizzaIngredientFactory {
public:
  std::unique_ptr<Dough> createDough() override {
    return std::make_unique<Dough>("Thick crust");
  }
  std::unique_ptr<Sauce> createSauce() override {
    return std::make_unique<Sauce>("Plum tomato");
  }
  std::unique_ptr<Cheese> createCheese() override {
    return std::make_unique<Cheese>("Mozarella");
  }
  std::unique_ptr<Clam> createClam() override {
    return std::make_unique<Clam>("Frozen");
  }
};
