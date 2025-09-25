#pragma once
#include "../gumball_machine.hpp"
#include "../state.hpp"

class WinnerState : public State {
public:
  WinnerState(std::shared_ptr<GumballMachine> gumballMachine) : State(gumballMachine) {}
  void dispense() override;
};
