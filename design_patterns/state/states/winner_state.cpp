#include "winner_state.hpp"
#include "../gumball_machine.hpp"

void WinnerState::dispense() {
  std::cout << "Dispensing 2 gumballs" << std::endl;
  gumballMachine->numberGumballs -= 2;
  if (gumballMachine->numberGumballs > 0)
    gumballMachine->setState(gumballMachine->noQuarterState);
  else
    gumballMachine->setState(gumballMachine->soldOutState);
}
