#pragma once
#include "observer.hpp"
#include <list>

class Subject {
public:
  void registerObserver(Observer *observer) { observers.push_back(observer); }
  void removeObserver(Observer *observer) { observers.remove(observer); }
  virtual ~Subject() = default;

protected:
  void notifyObservers() const {
    for (auto observer : observers)
      observer->update();
  }

private:
  std::list<Observer *> observers;
};
