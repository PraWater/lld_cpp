#pragma once
#include "../pizza.hpp"
#include "../pizza_ingredient_factory.hpp"

class ClamPizza : public Pizza {
  std::shared_ptr<PizzaIngredientFactory> ingredientFactory;

public:
  ClamPizza(std::shared_ptr<PizzaIngredientFactory> ingredientFactory)
      : ingredientFactory(ingredientFactory) {}

  void prepare() override {
    std::cout << "Preparing " << name << std::endl;
    dough = ingredientFactory->createDough();
    sauce = ingredientFactory->createSauce();
    clam = ingredientFactory->createClam();
    std::cout << "Adding ingredients: " << *dough << ' ' << *sauce << ' '
              << *clam << std::endl;
  }
};
