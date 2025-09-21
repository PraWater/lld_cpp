#pragma once
#include "menu_component.hpp"
#include <iostream>
#include <list>
#include <memory>

class Menu : public MenuComponent {
public:
  Menu(const std::string name) : name(name) {}

  void add(const std::shared_ptr<MenuComponent> menuComponent) override {
    menuComponents.push_back(menuComponent);
  }

  void remove(const std::shared_ptr<MenuComponent> menuComponent) override {
    menuComponents.remove(menuComponent);
  }

  const std::string &getName() const override { return name; }

  void print() const override {
    std::cout << "\n" + getName() << std::endl;
    std::cout << "---------------------" << std::endl;

    for (const auto &menuComponent : menuComponents) {
      menuComponent->print();
    }
  }

private:
  std::string name;
  std::list<std::shared_ptr<MenuComponent>> menuComponents;
};
