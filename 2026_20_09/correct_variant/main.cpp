#include <iostream>

#include "io.hpp"
#include "sortings.hpp"

int main() {
    int s = 0;
    std::cout << "Введите размер массива: ";
    std::cin >> s;
    int arr[s];
    for (int i = 0; i < s; ++i) {
        std::cout << "Введите элемент" << i + 1 << ": ";
        std::cin >> arr[i];
    }

    const int arr_size = sizeof(arr) / sizeof(arr[0]);

    biv::print_array("Массив до сортировки:", arr, arr_size);

    biv::my_sort(arr, arr_size);

    biv::print_array("Массив после сортировки:", arr, arr_size);
}
