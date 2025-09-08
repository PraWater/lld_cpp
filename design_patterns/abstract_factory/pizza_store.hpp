#pragma once
#include "pizza_ingredient_factories/Chicago_pizza_ingredient_factory.hpp"
#include "pizza_ingredient_factories/NY_pizza_ingredient_factory.hpp"
#include "pizzas/cheeze_pizza.hpp"
#include "pizzas/clam_pizza.hpp"
#include <memory>

class PizzaStore {
public:
  std::unique_ptr<Pizza> orderPizza(std::string type) {
    std::unique_ptr<Pizza> pizza = createPizza(type);
    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();
    return pizza;
  }

  std::unique_ptr<Pizza> createPizza(const std::string type) {
    std::unique_ptr<Pizza> pizza;
    if (type == "cheese")
      pizza = std::make_unique<CheezePizza>(ingredientFactory);
    else if (type == "clam")
      pizza = std::make_unique<ClamPizza>(ingredientFactory);
    else
      throw storeName + " store doesn't offer " + type + " pizza";

    pizza->setName(storeName + " style " + type + " pizza");
    return pizza;
  }

protected:
  std::shared_ptr<PizzaIngredientFactory> ingredientFactory;
  std::string storeName;
};

class NYStylePizzaStore : public PizzaStore {
public:
  NYStylePizzaStore() {
    storeName = "NY";
    ingredientFactory = std::make_shared<NYPizzaIngredientFactory>();
  }
};

class ChicagoStylePizzaStore : public PizzaStore {
public:
  ChicagoStylePizzaStore() {
    storeName = "Chicago";
    ingredientFactory = std::make_shared<ChicagoPizzaIngredientFactory>();
  }
};
