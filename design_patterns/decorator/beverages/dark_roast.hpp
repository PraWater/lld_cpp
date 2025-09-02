#pragma once
#include "../beverage.hpp"

class DarkRoast : public Beverage {
public:
  DarkRoast() { description = "Dark Roast"; }
  int cost() override { return 99; }
};
