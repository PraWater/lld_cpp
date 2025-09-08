#include "pizza_store.hpp"
#include <memory>

int main() {
  std::unique_ptr<PizzaStore> nyStore = std::make_unique<NYStylePizzaStore>();
  std::unique_ptr<PizzaStore> chicagoStore =
      std::make_unique<ChicagoStylePizzaStore>();

  std::unique_ptr<Pizza> pizza = nyStore->orderPizza("cheese");
  std::cout << "Ethan ordered a " << pizza->getName() << std::endl << std::endl;

  pizza = chicagoStore->orderPizza("clam");
  std::cout << "Joel ordered a " << pizza->getName() << std::endl;
}
