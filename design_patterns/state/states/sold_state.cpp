#include "sold_state.hpp"
#include "no_quarter_state.hpp"
#include "sold_out_state.hpp"

void SoldState::dispense() {
  std::cout << "Dispensing 1 gumball" << std::endl;
  if (--gumballMachine->numberGumballs > 0)
    gumballMachine->setState(std::make_unique<NoQuarterState>(gumballMachine));
  else
    gumballMachine->setState(std::make_unique<SoldOutState>(gumballMachine));
}
