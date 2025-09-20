#include "home_theater/lights.hpp"
#include "home_theater/player.hpp"
#include "home_theater/popper.hpp"
#include "home_theater/screen.hpp"
#include "home_theater_facade.hpp"
#include <memory>

int main() {
  auto lights = std::make_shared<Lights>();
  auto screen = std::make_shared<Screen>();
  auto popper = std::make_shared<Popper>();
  auto player = std::make_shared<Player>();

  auto homeTheater =
      std::make_unique<HomeTheaterFacade>(lights, screen, popper, player);

  homeTheater->watchMovie("Ready Player One");
  homeTheater->endMovie();
}
