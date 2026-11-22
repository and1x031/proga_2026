#pragma once

#include "menu.hpp"

namespace ALazutkin{

    const MenuItem* show_menu(const MenuItem* current);
    const MenuItem* exit(const MenuItem* current);
    const MenuItem* go_back(const MenuItem* current);

    const MenuItem* spbgu_pmpu(const MenuItem* current);
    const MenuItem* spbgu_matmech(const MenuItem* current);
    const MenuItem* spbgu_linguistics(const MenuItem* current);

    const MenuItem* itmo(const MenuItem* current);
    const MenuItem* polytech(const MenuItem* current);
    const MenuItem* leti(const MenuItem* current);

}
