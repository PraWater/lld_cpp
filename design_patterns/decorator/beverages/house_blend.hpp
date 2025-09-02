#pragma once
#include "../beverage.hpp"

class HouseBlend : public Beverage {
public:
  HouseBlend() { description = "House Blend"; }
  int cost() override { return 89; }
};
