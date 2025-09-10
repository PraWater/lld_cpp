#pragma once
#include <iostream>
#include <string>

class Light {
public:
  Light(std::string name) : name(name) {}
  void on() { std::cout << name << " light is on!" << std::endl; }
  void off() { std::cout << name << " light is off!" << std::endl; }

private:
  std::string name;
};
