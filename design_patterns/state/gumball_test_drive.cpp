#include "gumball_machine.hpp"

int main() {
  std::unique_ptr<GumballMachine> gm = std::make_unique<GumballMachine>(100);

  gm->insertQuarter();
  gm->turnCrank();
  gm->dispense();
  gm->ejectQuarter();
  gm->insertQuarter();
  gm->ejectQuarter();
}
