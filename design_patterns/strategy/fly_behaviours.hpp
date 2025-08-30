#pragma once
#include <iostream>

class FlyBehaviour {
public:
  virtual void fly() = 0;
};

class FlyWithWings : public FlyBehaviour {
public:
  void fly() override { std::cout << "Flying" << std::endl; }
};
class FlyNoWay : public FlyBehaviour {
  void fly() override { std::cout << "Cannot fly" << std::endl; }
};
