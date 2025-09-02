#pragma once
#include "../condiment_decorator.hpp"

class Whip : public CondimentDecorator {
public:
  Whip(std::unique_ptr<Beverage> bev) : CondimentDecorator(std::move(bev)) {
    description = "Whip";
  }
  int cost() { return 10 + beverage->cost(); }
};
