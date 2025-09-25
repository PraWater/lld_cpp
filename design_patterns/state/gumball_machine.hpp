#pragma once

#include "state.hpp"
#include <memory>

class GumballMachine {
public:
  GumballMachine(int numberGumballs) : numberGumballs(numberGumballs) {}

  void insertQuarter() { state->insertQuarter(); }
  void ejectQuarter() { state->ejectQuarter(); }
  void turnCrank() { state->turnCrank(); }
  void dispense() { state->dispense(); }

  void setState(std::unique_ptr<State> state) {
    this->state = std::move(state);
  }

  int numberGumballs;

public:
  std::unique_ptr<State> state;
};
