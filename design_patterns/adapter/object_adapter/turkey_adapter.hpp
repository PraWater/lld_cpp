#pragma once
#include "duck.hpp"
#include "turkey.hpp"
#include <memory>

class TurkeyAdapter : public Duck {
  std::unique_ptr<Turkey> turkey;

public:
  TurkeyAdapter(std::unique_ptr<Turkey> turkey) : turkey(std::move(turkey)) {}

  void quack() override { turkey->gobble(); }

  void fly() override {
    for (int i = 0; i < 5; i++) {
      turkey->fly();
    }
  }
};
