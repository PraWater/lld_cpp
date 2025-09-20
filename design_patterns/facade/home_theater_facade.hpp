#pragma once
#include "home_theater/lights.hpp"
#include "home_theater/player.hpp"
#include "home_theater/popper.hpp"
#include "home_theater/screen.hpp"
#include <memory>

class HomeTheaterFacade {
public:
  HomeTheaterFacade(std::shared_ptr<Lights> lights,
                    std::shared_ptr<Screen> screen,
                    std::shared_ptr<Popper> popper,
                    std::shared_ptr<Player> player)
      : lights(lights), screen(screen), popper(popper), player(player) {}

  void watchMovie(std::string movie) {
    std::cout << "Get ready to watch a movie..." << std::endl;
    popper->on();
    popper->pop();
    lights->dim(10);
    screen->down();
    player->on();
    player->play(movie);
  }

  void endMovie() {
    std::cout << "Shutting movie theater down..." << std::endl;
    popper->off();
    lights->on();
    screen->up();
    player->stop();
    player->off();
  }

private:
  std::shared_ptr<Lights> lights;
  std::shared_ptr<Screen> screen;
  std::shared_ptr<Popper> popper;
  std::shared_ptr<Player> player;
};
