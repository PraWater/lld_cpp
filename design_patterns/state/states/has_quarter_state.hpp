#pragma once
#include "../gumball_machine.hpp"
#include "../state.hpp"
#include <chrono>
#include <random>

class HasQuarterState : public State {
public:
  HasQuarterState(std::shared_ptr<GumballMachine> gumballMachine) : State(gumballMachine) {
    rng.seed(std::chrono::system_clock::now().time_since_epoch().count());
  }
  void ejectQuarter() override;
  void turnCrank() override;

private:
  std::mt19937 rng;
  std::uniform_int_distribution<> distrib{1, 10};
};
