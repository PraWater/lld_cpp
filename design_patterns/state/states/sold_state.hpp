#pragma once
#include "../gumball_machine.hpp"
#include "../state.hpp"

class SoldState : public State {
public:
  SoldState(std::shared_ptr<GumballMachine> gumballMachine) : State(gumballMachine) {}
  void dispense() override;
};
