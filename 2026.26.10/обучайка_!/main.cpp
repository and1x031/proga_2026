#include "menu.hpp"
#include "menu_items.hpp"

int main() {
    const ALazutkin::MenuItem* current = &ALazutkin::MAIN;
    do {
        current = current->func(current);
    } while (true);
    return 0;
}
