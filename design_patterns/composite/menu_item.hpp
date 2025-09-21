#pragma once
#include "menu_component.hpp"
#include <iostream>

class MenuItem : public MenuComponent {
public:
  MenuItem(const std::string name, const double price)
      : name(name), price(price) {}

  const std::string &getName() const override { return name; }

  const double &getPrice() const override { return price; }

  void print() const override {
    std::cout << "  " << getName() << ", " << getPrice() << std::endl;
  }

private:
  std::string name;
  double price;
};
