#pragma once
#include "../vendors/stereo.hpp"
#include "command.hpp"
#include <memory>

class StereoOnWithCDCommand : public Command {
public:
  StereoOnWithCDCommand(std::shared_ptr<Stereo> stereo) : stereo(stereo) {}
  void execute() {
    stereo->on();
    stereo->setCD();
    stereo->setVolume(11);
  }

private:
  std::shared_ptr<Stereo> stereo;
};
