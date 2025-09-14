#include "duck.hpp"
#include "turkey.hpp"
#include "turkey_adapter.hpp"

int main() {
  std::unique_ptr<Duck> duck = std::make_unique<MallardDuck>();

  std::unique_ptr<Turkey> turkey = std::make_unique<WildTurkey>();

  std::cout << "The Turkey says..." << std::endl;
  turkey->gobble();
  turkey->fly();

  std::unique_ptr<Duck> turkeyAdapter =
      std::make_unique<TurkeyAdapter>(std::move(turkey));

  std::cout << "\nThe Duck says..." << std::endl;
  duck->quack();
  duck->fly();

  std::cout << "\nThe TurkeyAdapter says..." << std::endl;
  turkeyAdapter->quack();
  turkeyAdapter->fly();
}
