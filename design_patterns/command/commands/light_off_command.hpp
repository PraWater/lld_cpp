#pragma once
#include "../vendors/light.hpp"
#include "command.hpp"
#include <memory>

class LightOffCommand : public Command {
public:
  LightOffCommand(std::shared_ptr<Light> light) : light(light) {}
  void execute() { light->off(); }

private:
  std::shared_ptr<Light> light;
};
