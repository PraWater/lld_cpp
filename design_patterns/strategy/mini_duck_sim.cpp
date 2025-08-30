#include "ducks.hpp"
#include <memory>

int main() {
  std::unique_ptr<Duck> duck{std::make_unique<MallardDuck>()};
  duck->display();
  duck->performQuack();
  duck->performFly();

  duck = std::make_unique<RubberDuck>();
  duck->display();
  duck->performQuack();
  duck->performFly();
}
