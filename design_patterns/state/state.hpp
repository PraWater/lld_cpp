#pragma once
#include <iostream>
#include <memory>

class GumballMachine;
class State {
public:
  State(std::shared_ptr<GumballMachine> gumballMachine) : gumballMachine(gumballMachine) {}
  virtual ~State() = default;

  virtual void insertQuarter() {
    std::cout << "Operation not allowed!" << std::endl;
  }
  virtual void ejectQuarter() {
    std::cout << "Operation not allowed!" << std::endl;
  }
  virtual void turnCrank() {
    std::cout << "Operation not allowed!" << std::endl;
  }
  virtual void dispense() {
    std::cout << "Operation not allowed!" << std::endl;
  }

protected:
  std::shared_ptr<GumballMachine> gumballMachine;
};
