#pragma once
#include "../gumball_machine.hpp"
#include "../state.hpp"

class NoQuarterState : public State {
public:
  NoQuarterState(std::shared_ptr<GumballMachine> gumballMachine) : State(gumballMachine) {}
  void insertQuarter() override;
};
