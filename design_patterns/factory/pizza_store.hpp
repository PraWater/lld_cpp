#pragma once
#include "pizza.hpp"

class PizzaStore {
public:
  Pizza orderPizza(std::string type) {
    Pizza pizza;
    pizza = createPizza(type);
    pizza.prepare();
    pizza.bake();
    pizza.cut();
    pizza.box();
    return pizza;
  }
  virtual Pizza createPizza(const std::string type) = 0;
  virtual ~PizzaStore() = default;
};
