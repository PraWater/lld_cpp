#include "caffeine_beverage.hpp"
#include "coffee_with_hook.hpp"
#include "tea.hpp"
#include <iostream>
#include <memory>

int main() {
  std::unique_ptr<CaffeineBeverage> tea = std::make_unique<Tea>();
  std::unique_ptr<CaffeineBeverage> coffeeWithHook =
      std::make_unique<CoffeeWithHook>();
  std::cout << "Making tea..." << std::endl;
  tea->prepareRecipe();

  std::cout << std::endl << "Making coffee..." << std::endl;
  coffeeWithHook->prepareRecipe();
}
