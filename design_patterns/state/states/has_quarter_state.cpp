#include "has_quarter_state.hpp"
#include "no_quarter_state.hpp"
#include "sold_state.hpp"
#include "winner_state.hpp"
#include <memory>

void HasQuarterState::ejectQuarter() {
  std::cout << "Quarter ejected" << std::endl;
  gumballMachine->setState(std::make_unique<NoQuarterState>(gumballMachine));
}
void HasQuarterState::turnCrank() {
  std::cout << "Crank turned" << std::endl;
  int chance = distrib(rng);
  if (chance == 9)
    gumballMachine->setState(std::make_unique<WinnerState>(gumballMachine));
  else
    gumballMachine->setState(std::make_unique<SoldState>(gumballMachine));
}
