#pragma once
#include "../state.hpp"

class SoldState : public State {
public:
  SoldState(GumballMachine *gumballMachine) : State(gumballMachine) {}
  void dispense() override;
};
