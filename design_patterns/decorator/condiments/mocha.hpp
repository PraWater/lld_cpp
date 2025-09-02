#pragma once
#include "../condiment_decorator.hpp"

class Mocha : public CondimentDecorator {
public:
  Mocha(std::unique_ptr<Beverage> bev) : CondimentDecorator(std::move(bev)) {
    description = "Mocha";
  }
  int cost() { return 20 + beverage->cost(); }
};
