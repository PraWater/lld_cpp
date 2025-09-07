#pragma once
#include "../pizza_store.hpp"
#include "../pizzas/NY_style_cheeze_pizza.hpp"

class NYPizzaStore : public PizzaStore {
public:
  Pizza createPizza(const std::string item) override {
    if (item == "cheese") {
      return NYStyleCheesePizza();
    } else
      throw "NY Store doesn't have " + item;
  }
};
