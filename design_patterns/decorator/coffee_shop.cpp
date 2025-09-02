#include "beverage.hpp"
#include "beverages/dark_roast.hpp"
#include "beverages/house_blend.hpp"
#include "condiments/mocha.hpp"
#include "condiments/whip.hpp"
#include <iostream>
#include <memory>

int main() {
  std::unique_ptr<Beverage> beverage1{std::make_unique<DarkRoast>()};
  beverage1 = std::make_unique<Mocha>(std::move(beverage1));
  beverage1 = std::make_unique<Mocha>(std::move(beverage1));
  beverage1 = std::make_unique<Whip>(std::move(beverage1));
  std::cout << beverage1->getDescription() << " ₹" << beverage1->cost()
            << std::endl;

  std::unique_ptr<Beverage> beverage2{std::make_unique<HouseBlend>()};
  beverage2 = std::make_unique<Mocha>(std::move(beverage2));
  beverage2 = std::make_unique<Whip>(std::move(beverage2));
  std::cout << beverage2->getDescription() << " ₹" << beverage2->cost()
            << std::endl;

  return 0;
}
