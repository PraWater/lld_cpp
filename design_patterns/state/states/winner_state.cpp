#include "winner_state.hpp"
#include "no_quarter_state.hpp"
#include "sold_out_state.hpp"

void WinnerState::dispense() {
  std::cout << "Dispensing 2 gumballs" << std::endl;
  gumballMachine->numberGumballs -= 2;
  if (gumballMachine->numberGumballs > 0)
    gumballMachine->setState(std::make_unique<NoQuarterState>(gumballMachine));
  else
    gumballMachine->setState(std::make_unique<SoldOutState>(gumballMachine));
}
