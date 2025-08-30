#pragma once
#include "fly_behaviours.hpp"
#include "quack_behaviours.hpp"
#include <iostream>
#include <memory>

class Duck {
public:
  void swim() { std::cout << "Swimming" << std::endl; }

  void performFly() { flyBehaviour->fly(); }

  void performQuack() { quackBehaviour->quack(); }

  void setFlyBehaviour(std::unique_ptr<FlyBehaviour> fb) {
    flyBehaviour = std::move(fb);
  }

  void setQuackBehaviour(std::unique_ptr<QuackBehaviour> qb) {
    quackBehaviour = std::move(qb);
  }

  virtual void display() = 0;

protected:
  std::unique_ptr<FlyBehaviour> flyBehaviour = nullptr;
  std::unique_ptr<QuackBehaviour> quackBehaviour = nullptr;
};

class MallardDuck : public Duck {
public:
  MallardDuck() {
    quackBehaviour = std::make_unique<Quack>();
    flyBehaviour = std::make_unique<FlyWithWings>();
  }

  void display() override { std::cout << "Mallard Duck" << std::endl; }
};

class RubberDuck : public Duck {
public:
  RubberDuck() {
    quackBehaviour = std::make_unique<Squeak>();
    flyBehaviour = std::make_unique<FlyNoWay>();
  }

  void display() override { std::cout << "Rubber Duck" << std::endl; }
};

class DecoyDuck : public Duck {
public:
  DecoyDuck() {
    quackBehaviour = std::make_unique<MuteQueak>();
    flyBehaviour = std::make_unique<FlyNoWay>();
  }

  void display() override { std::cout << "Decoy Duck" << std::endl; }
};
