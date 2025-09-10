#pragma once
#include "commands/command.hpp"
#include <iostream>
#include <memory>
#include <vector>

class RemoteControl {
public:
  void setCommand(const int slot, std::unique_ptr<Command> onCommand,
                  std::unique_ptr<Command> offCommand) {
    onCommands[slot] = std::move(onCommand);
    offCommands[slot] = std::move(offCommand);
  }

  void onButtonWasPushed(const int slot) {
    if (onCommands[slot] == nullptr)
      std::cout << "No command is assigned to slot " << slot << std::endl;
    else
      onCommands[slot]->execute();
  }

  void offButtonWasPushed(const int slot) {
    if (offCommands[slot] == nullptr)
      std::cout << "No command is assigned to slot " << slot << std::endl;
    else
      offCommands[slot]->execute();
  }

private:
  std::vector<std::unique_ptr<Command>> onCommands{7};
  std::vector<std::unique_ptr<Command>> offCommands{7};
};
