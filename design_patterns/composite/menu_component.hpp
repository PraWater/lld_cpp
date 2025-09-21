#pragma once
#include <memory>
#include <stdexcept>

class MenuComponent {
public:
  virtual void
  add(std::shared_ptr<MenuComponent> menuComponent) {
    throw std::runtime_error("add(): Unsupported Operation");
  }
  virtual void
  remove(std::shared_ptr<MenuComponent> menuComponent) {
    throw std::runtime_error("remove(): Unsupported Operation");
  }
  virtual const std::string &getName() const {
    throw std::runtime_error("getName(): Unsupported Operation");
  }
  virtual const double &getPrice() const {
    throw std::runtime_error("getPrice(): Unsupported Operation");
  }
  virtual void print() const {
    throw std::runtime_error("print(): Unsupported Operation");
  }
};
