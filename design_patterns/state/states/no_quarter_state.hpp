#pragma once
#include "../state.hpp"

class NoQuarterState : public State {
public:
  NoQuarterState(GumballMachine *gumballMachine) : State(gumballMachine) {}
  void insertQuarter() override;
};
