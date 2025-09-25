#pragma once

#include "state.hpp"
#include "states/has_quarter_state.hpp"
#include "states/no_quarter_state.hpp"
#include "states/sold_out_state.hpp"
#include "states/sold_state.hpp"
#include "states/winner_state.hpp"
#include <memory>

class GumballMachine {
public:
  GumballMachine(int numberGumballs) : numberGumballs(numberGumballs) {
    soldOutState = std::make_shared<SoldOutState>(this);
    soldState = std::make_shared<SoldState>(this);
    hasQuarterState = std::make_shared<HasQuarterState>(this);
    noQuarterState = std::make_shared<NoQuarterState>(this);
    winnerState = std::make_shared<WinnerState>(this);

    if (numberGumballs > 0)
      setState(noQuarterState);
    else
      setState(soldOutState);
  }

  void insertQuarter() { state->insertQuarter(); }
  void ejectQuarter() { state->ejectQuarter(); }
  void turnCrank() { state->turnCrank(); }
  void dispense() { state->dispense(); }

  void setState(std::shared_ptr<State> state) { this->state = state; }

  int numberGumballs;

  std::shared_ptr<State> soldOutState;
  std::shared_ptr<State> soldState;
  std::shared_ptr<State> hasQuarterState;
  std::shared_ptr<State> noQuarterState;
  std::shared_ptr<State> winnerState;

private:
  std::shared_ptr<State> state;
};
