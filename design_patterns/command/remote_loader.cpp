#include "commands/light_off_command.hpp"
#include "commands/light_on_command.hpp"
#include "commands/stereo_off_command.hpp"
#include "commands/stereo_on_with_cd_command.hpp"
#include "remote_control.hpp"
#include "vendors/light.hpp"
#include "vendors/stereo.hpp"
#include <memory>

int main() {
  std::unique_ptr<RemoteControl> remoteControl =
      std::make_unique<RemoteControl>();
  std::shared_ptr<Light> livingRoomLight =
      std::make_shared<Light>("Living room");
  std::shared_ptr<Light> kitchenLight = std::make_shared<Light>("Kitchen");
  std::shared_ptr<Stereo> stereo = std::make_shared<Stereo>();

  std::unique_ptr<LightOnCommand> livingRoomLightOn =
      std::make_unique<LightOnCommand>(livingRoomLight);
  std::unique_ptr<LightOffCommand> livingRoomLightOff =
      std::make_unique<LightOffCommand>(livingRoomLight);
  std::unique_ptr<LightOnCommand> kitchenLightOn =
      std::make_unique<LightOnCommand>(kitchenLight);
  std::unique_ptr<LightOffCommand> kitchenLightOff =
      std::make_unique<LightOffCommand>(kitchenLight);

  std::unique_ptr<StereoOnWithCDCommand> stereoOnWithCD =
      std::make_unique<StereoOnWithCDCommand>(stereo);
  std::unique_ptr<StereoOffCommand> stereoOff =
      std::make_unique<StereoOffCommand>(stereo);

  remoteControl->setCommand(0, std::move(livingRoomLightOn),
                            std::move(livingRoomLightOff));
  remoteControl->setCommand(1, std::move(kitchenLightOn),
                            std::move(kitchenLightOff));
  remoteControl->setCommand(2, std::move(stereoOnWithCD), std::move(stereoOff));

  remoteControl->onButtonWasPushed(0);
  remoteControl->offButtonWasPushed(0);
  remoteControl->onButtonWasPushed(1);
  remoteControl->offButtonWasPushed(1);
  remoteControl->onButtonWasPushed(2);
  remoteControl->offButtonWasPushed(2);
}
