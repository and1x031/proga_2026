#include "menu_items.hpp"
#include "menu_functions.hpp"

const ALazutkin::MenuItem ALazutkin::SPBGU_GO_BACK = {
    "0 - Выйти в предыдущее меню",
    ALazutkin::go_back,
    &ALazutkin::SPBGU
};

const ALazutkin::MenuItem ALazutkin::SPBGU_PMPU = {
    "1 - Факультет ПМ-ПУ",
    ALazutkin::spbgu_pmpu,
    &ALazutkin::SPBGU
};

const ALazutkin::MenuItem ALazutkin::SPBGU_MATMECH = {
    "2 - Факультет МатМех",
    ALazutkin::spbgu_matmech,
    &ALazutkin::SPBGU
};

const ALazutkin::MenuItem ALazutkin::SPBGU_LINGUISTICS = {
    "3 - Лингвистический факультет",
    ALazutkin::spbgu_linguistics,
    &ALazutkin::SPBGU
};

const ALazutkin::MenuItem* const spbgu_children[] = {
    &ALazutkin::SPBGU_GO_BACK,
    &ALazutkin::SPBGU_PMPU,
    &ALazutkin::SPBGU_MATMECH,
    &ALazutkin::SPBGU_LINGUISTICS
};

const int spbgu_size =
    sizeof(spbgu_children) / sizeof(spbgu_children[0]);

const ALazutkin::MenuItem ALazutkin::SPBGU = {
    "1 - СПБГУ",
    ALazutkin::show_menu,
    &ALazutkin::UNIVERSITIES,
    spbgu_children,
    spbgu_size
};

const ALazutkin::MenuItem ALazutkin::ITMO = {
    "2 - ИТМО",
    ALazutkin::itmo,
    &ALazutkin::UNIVERSITIES
};

const ALazutkin::MenuItem ALazutkin::POLYTECH = {
    "3 - Политех",
    ALazutkin::polytech,
    &ALazutkin::UNIVERSITIES
};

const ALazutkin::MenuItem ALazutkin::LETI = {
    "4 - ЛЭТИ",
    ALazutkin::leti,
    &ALazutkin::UNIVERSITIES
};

const ALazutkin::MenuItem ALazutkin::UNIVERSITIES_GO_BACK = {
    "0 - Выйти в главное меню",
    ALazutkin::go_back,
    &ALazutkin::UNIVERSITIES
};

const ALazutkin::MenuItem* const universities_children[] = {
    &ALazutkin::UNIVERSITIES_GO_BACK,
    &ALazutkin::SPBGU,
    &ALazutkin::ITMO,
    &ALazutkin::POLYTECH,
    &ALazutkin::LETI
};

const int universities_size =
    sizeof(universities_children) / sizeof(universities_children[0]);

const ALazutkin::MenuItem ALazutkin::UNIVERSITIES = {
    "1 - Посмотреть университеты Санкт-Петербурга",
    ALazutkin::show_menu,
    &ALazutkin::MAIN,
    universities_children,
    universities_size
};

const ALazutkin::MenuItem ALazutkin::EXIT = {
    "0 - Я уже студент",
    ALazutkin::exit,
    &ALazutkin::MAIN
};

const ALazutkin::MenuItem* const main_children[] = {
    &ALazutkin::EXIT,
    &ALazutkin::UNIVERSITIES
};

const int main_size =
    sizeof(main_children) / sizeof(main_children[0]);

const ALazutkin::MenuItem ALazutkin::MAIN = {
    nullptr,
    ALazutkin::show_menu,
    nullptr,
    main_children,
    main_size
};
