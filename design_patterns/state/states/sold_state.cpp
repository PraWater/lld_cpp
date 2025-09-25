#include "sold_state.hpp"
#include "../gumball_machine.hpp"

void SoldState::dispense() {
  std::cout << "Dispensing 1 gumball" << std::endl;
  if (--gumballMachine->numberGumballs > 0)
    gumballMachine->setState(gumballMachine->noQuarterState);
  else
    gumballMachine->setState(gumballMachine->soldOutState);
}
