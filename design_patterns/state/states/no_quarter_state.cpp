#include "no_quarter_state.hpp"
#include "../gumball_machine.hpp"

void NoQuarterState::insertQuarter() {
  std::cout << "Quarter inserted" << std::endl;
  gumballMachine->setState(gumballMachine->hasQuarterState);
}
