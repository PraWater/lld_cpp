#pragma once
#include "../pizza_store.hpp"
#include "../pizzas/Chicago_style_cheeze_pizza.hpp"

class ChicagoPizzaStore : public PizzaStore {
public:
  Pizza createPizza(const std::string item) override {
    if (item == "cheese") {
      return ChicagoStyleCheesePizza();
    } else
      throw "Chicago Store doesn't have " + item;
  }
};
