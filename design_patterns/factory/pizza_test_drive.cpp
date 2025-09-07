#include "pizza_store.hpp"
#include "pizza_stores/Chicago_pizza_store.hpp"
#include "pizza_stores/NY_pizza_store.hpp"
#include <memory>

int main() {
  std::unique_ptr<PizzaStore> nyStore = std::make_unique<NYPizzaStore>();
  std::unique_ptr<PizzaStore> chicagoStore =
      std::make_unique<ChicagoPizzaStore>();

  Pizza pizza = nyStore->orderPizza("cheese");
  std::cout << "Ethan ordered a " << pizza.getName() << std::endl << std::endl;

  pizza = chicagoStore->orderPizza("cheese");
  std::cout << "Joel ordered a " << pizza.getName() << std::endl;
}
