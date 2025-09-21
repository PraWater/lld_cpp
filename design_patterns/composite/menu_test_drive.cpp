#include "menu.hpp"
#include "menu_component.hpp"
#include "menu_item.hpp"
#include "waitress.hpp"

int main() {
  std::shared_ptr<MenuComponent> pancakeHouseMenu =
      std::make_shared<Menu>("PANCAKE HOUSE MENU");
  std::shared_ptr<MenuComponent> dinerMenu =
      std::make_shared<Menu>("DINER MENU");
  std::shared_ptr<MenuComponent> cafeMenu = std::make_shared<Menu>("CAFE MENU");
  std::shared_ptr<MenuComponent> dessertMenu =
      std::make_shared<Menu>("DESSERT MENU");

  std::unique_ptr<MenuComponent> allMenus = std::make_unique<Menu>("ALL MENUS");

  allMenus->add(pancakeHouseMenu);
  allMenus->add(dinerMenu);
  allMenus->add(cafeMenu);

  pancakeHouseMenu->add(std::make_shared<MenuItem>("Pancake", 1.49));

  dinerMenu->add(std::make_shared<MenuItem>("Pasta", 3.89));
  dinerMenu->add(dessertMenu);

  dessertMenu->add(std::make_shared<MenuItem>("Apple Pie", 1.59));

  cafeMenu->add(std::make_shared<MenuItem>("Coffee", 0.49));

  std::unique_ptr<Waitress> waitress =
      std::make_unique<Waitress>(std::move(allMenus));

  waitress->printMenu();
}
