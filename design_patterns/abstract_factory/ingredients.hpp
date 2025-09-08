#pragma once
#include <ostream>
#include <string>

class Ingredient {
public:
  Ingredient(std::string name, std::string type) : name(name), type(type) {}
  friend std::ostream &operator<<(std::ostream &os, const Ingredient &obj) {
    os << obj.name << ' ' << obj.type;
    return os;
  }

protected:
  std::string name;
  std::string type;
};

class Dough : public Ingredient {
public:
  Dough(std::string name) : Ingredient(name, "dough") {}
};

class Cheese : public Ingredient {
public:
  Cheese(std::string name) : Ingredient(name, "cheese") {}
};

class Clam : public Ingredient {
public:
  Clam(std::string name) : Ingredient(name, "clam") {}
};

class Sauce : public Ingredient {
public:
  Sauce(std::string name) : Ingredient(name, "sauce") {}
};
