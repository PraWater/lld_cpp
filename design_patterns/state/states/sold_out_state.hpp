#pragma once
#include "../state.hpp"

class SoldOutState : public State {
public:
  SoldOutState(GumballMachine *gumballMachine) : State(gumballMachine) {}
};
