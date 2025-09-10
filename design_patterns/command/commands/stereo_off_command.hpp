#pragma once
#include "../vendors/stereo.hpp"
#include "command.hpp"
#include <memory>

class StereoOffCommand : public Command {
public:
  StereoOffCommand(std::shared_ptr<Stereo> stereo) : stereo(stereo) {}
  void execute() { stereo->off(); }

private:
  std::shared_ptr<Stereo> stereo;
};
