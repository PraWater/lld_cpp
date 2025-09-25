#pragma once
#include "../state.hpp"

class WinnerState : public State {
public:
  WinnerState(GumballMachine *gumballMachine) : State(gumballMachine) {}
  void dispense() override;
};
