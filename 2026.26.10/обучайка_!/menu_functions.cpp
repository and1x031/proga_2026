#include "menu_functions.hpp"

#include <iostream>
#include <cstdlib>
#include <limits>

const ALazutkin::MenuItem* ALazutkin::show_menu(
    const MenuItem* current
) {
    std::cout << "Добро пожаловать!" << std::endl;

    for (int i = 1; i < current->children_count; ++i) {
        std::cout << current->children[i]->title << std::endl;
    }

    std::cout << current->children[0]->title << std::endl;
    std::cout << "Выберите пункт: ";

    int user_input = 0;

    if (!(std::cin >> user_input)) {
        if (std::cin.eof()) {
            std::exit(0);
        }

        std::cin.clear();
        std::cin.ignore(
            std::numeric_limits<std::streamsize>::max(), '\n'
        );

        std::cout << "Ошибка! Введите число." << std::endl;
        return current;
    }

    if (user_input < 0 || user_input >= current->children_count) {
        std::cout << "Нет такого пункта!" << std::endl;
        return current;
    }

    return current->children[user_input];
}

const ALazutkin::MenuItem* ALazutkin::exit(
    const MenuItem* current
) {
    std::exit(0);
    return nullptr;
}

const ALazutkin::MenuItem* ALazutkin::go_back(
    const MenuItem* current
) {
    if (current->parent != nullptr &&
        current->parent->parent != nullptr) {
        return current->parent->parent;
    }

    if (current->parent != nullptr) {
        return current->parent;
    }

    return current;
}

const ALazutkin::MenuItem* ALazutkin::spbgu_pmpu(
    const MenuItem* current
) {
    std::cout << "Факультет прикладной математики - процессов управления"
              << std::endl;

    return current->parent;
}

const ALazutkin::MenuItem* ALazutkin::spbgu_matmech(
    const MenuItem* current
) {
    std::cout << "Математико-механический факультет"
              << std::endl;

    return current->parent;
}

const ALazutkin::MenuItem* ALazutkin::spbgu_linguistics(
    const MenuItem* current
) {
    std::cout << "Лингвистический факультет"
              << std::endl;

    return current->parent;
}

const ALazutkin::MenuItem* ALazutkin::itmo(
    const MenuItem* current
) {
    std::cout << "Университет ИТМО" << std::endl;
    return current->parent;
}

const ALazutkin::MenuItem* ALazutkin::polytech(
    const MenuItem* current
) {
    std::cout << "Политехнический университет"
              << std::endl;

    return current->parent;
}

const ALazutkin::MenuItem* ALazutkin::leti(
    const MenuItem* current
) {
    std::cout << "Университет ЛЭТИ" << std::endl;
    return current->parent;
}
