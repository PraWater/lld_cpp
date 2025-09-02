#pragma once
#include <string>

class Beverage {
public:
  virtual int cost() = 0;
  virtual std::string getDescription() { return description; }

protected:
  std::string description;
};
