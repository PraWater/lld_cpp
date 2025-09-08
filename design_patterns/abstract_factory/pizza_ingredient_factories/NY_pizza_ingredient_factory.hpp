#pragma once
#include "../pizza_ingredient_factory.hpp"

class NYPizzaIngredientFactory : public PizzaIngredientFactory {
public:
  std::unique_ptr<Dough> createDough() override {
    return std::make_unique<Dough>("Thin crust");
  }
  std::unique_ptr<Sauce> createSauce() override {
    return std::make_unique<Sauce>("Marinara");
  }
  std::unique_ptr<Cheese> createCheese() override {
    return std::make_unique<Cheese>("Reggiano");
  }
  std::unique_ptr<Clam> createClam() override {
    return std::make_unique<Clam>("Fresh");
  }
};
