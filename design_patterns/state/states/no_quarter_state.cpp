#include "no_quarter_state.hpp"
#include "has_quarter_state.hpp"

void NoQuarterState::insertQuarter() {
  std::cout << "Quarter inserted" << std::endl;
  gumballMachine->setState(std::make_unique<HasQuarterState>(gumballMachine));
}
