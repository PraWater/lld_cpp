#pragma once
#include "beverage.hpp"
#include <memory>

class CondimentDecorator : public Beverage {
public:
  CondimentDecorator(std::unique_ptr<Beverage> bev)
      : beverage(std::move(bev)) {}
  std::string getDescription() override {
    return beverage->getDescription() + ", " + description;
  }

protected:
  std::unique_ptr<Beverage> beverage;
};
