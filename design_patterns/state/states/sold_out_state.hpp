#pragma once
#include "../gumball_machine.hpp"
#include "../state.hpp"

class SoldOutState : public State {
public:
  SoldOutState(std::shared_ptr<GumballMachine> gumballMachine) : State(gumballMachine) {}
};
