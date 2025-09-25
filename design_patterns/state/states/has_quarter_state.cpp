#include "has_quarter_state.hpp"
#include "../gumball_machine.hpp"
#include <memory>

void HasQuarterState::ejectQuarter() {
  std::cout << "Quarter ejected" << std::endl;
  gumballMachine->setState(gumballMachine->noQuarterState);
}
void HasQuarterState::turnCrank() {
  std::cout << "Crank turned" << std::endl;
  int chance = distrib(rng);
  if (chance == 9)
    gumballMachine->setState(gumballMachine->winnerState);
  else
    gumballMachine->setState(gumballMachine->soldState);
}
