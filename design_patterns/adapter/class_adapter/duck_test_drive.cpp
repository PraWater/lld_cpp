#include "duck.hpp"
#include "turkey.hpp"
#include "wild_turkey_adapter.hpp"
#include <memory>

int main() {
  std::unique_ptr<Duck> duck = std::make_unique<MallardDuck>();

  std::unique_ptr<Turkey> turkey = std::make_unique<WildTurkey>();

  std::unique_ptr<Duck> wildTurkeyAdapter =
      std::make_unique<WildTurkeyAdapter>();

  std::cout << "The Turkey says..." << std::endl;
  turkey->gobble();
  turkey->fly();

  std::cout << "\nThe Duck says..." << std::endl;
  duck->quack();
  duck->fly();

  std::cout << "\nThe TurkeyAdapter says..." << std::endl;
  wildTurkeyAdapter->quack();
  wildTurkeyAdapter->fly();
}
