#include "gumball_machine.hpp"
#include "states/no_quarter_state.hpp"

int main() {
  std::shared_ptr<GumballMachine> gm = std::make_shared< GumballMachine>(100);
  std::unique_ptr<State> s = std::make_unique<NoQuarterState>(gm);
  gm->setState(std::move(s));

  gm->insertQuarter();
  gm->turnCrank();
  gm->dispense();
  gm->ejectQuarter();
  gm->insertQuarter();
  gm->ejectQuarter();
}
