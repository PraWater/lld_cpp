#pragma once
#include "duck.hpp"
#include "turkey.hpp"

class WildTurkeyAdapter : public Duck, public WildTurkey {
public:
  void quack() override { WildTurkey::gobble(); }

  void fly() override {
    for (int i = 0; i < 5; i++) {
      WildTurkey::fly();
    }
  }
};
