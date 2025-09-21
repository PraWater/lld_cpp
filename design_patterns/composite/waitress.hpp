#pragma once

#include "menu_component.hpp"
class Waitress {
public:
  Waitress(std::unique_ptr<MenuComponent> allMenus)
      : allMenus(std::move(allMenus)) {}

  void printMenu() const { allMenus->print(); }

private:
  std::unique_ptr<MenuComponent> allMenus;
};
