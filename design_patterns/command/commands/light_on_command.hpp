#pragma once
#include "../vendors/light.hpp"
#include "command.hpp"
#include <memory>

class LightOnCommand : public Command {
public:
  LightOnCommand(std::shared_ptr<Light> light) : light(light) {}
  void execute() { light->on(); }

private:
  std::shared_ptr<Light> light;
};
