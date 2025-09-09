#include <iostream>

class Singleton {

private:
  Singleton() = default;
  ~Singleton() = default;

public:
  Singleton(const Singleton &) = delete;
  Singleton &operator=(const Singleton &) = delete;

  static Singleton &getInstance() {
    static Singleton instance; // Thread safe since C++ 11. Lazy instantiation.
    return instance;
  }
};

int main() {
  std::cout << "&Singleton::getInstance(): " << &Singleton::getInstance()
            << '\n';
  std::cout << "&Singleton::getInstance(): " << &Singleton::getInstance()
            << '\n';
}
