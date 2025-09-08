#pragma once
#include "../pizza.hpp"
#include "../pizza_ingredient_factory.hpp"

class CheezePizza : public Pizza {
  std::shared_ptr<PizzaIngredientFactory> ingredientFactory;

public:
  CheezePizza(std::shared_ptr<PizzaIngredientFactory> ingredientFactory)
      : ingredientFactory(ingredientFactory) {}

  void prepare() override {
    std::cout << "Preparing " << name << std::endl;
    dough = ingredientFactory->createDough();
    sauce = ingredientFactory->createSauce();
    cheese = ingredientFactory->createCheese();
    std::cout << "Adding ingredients: " << *dough << ' ' << *sauce
              << ' ' << *cheese << std::endl;
  }
};
