#pragma once
#include <iostream>

class QuackBehaviour {
public:
  virtual void quack() = 0;
};

class Quack : public QuackBehaviour {
public:
  void quack() override { std::cout << "Quack" << std::endl; }
};

class Squeak : public QuackBehaviour {
public:
  void quack() override { std::cout << "Squeak" << std::endl; }
};

class MuteQueak : public QuackBehaviour {
public:
  void quack() override {}
};
