#include <iostream>

void my_sort(int *arr, const int size);
void func(const char* const comment, int *arr, const int size);

int main() {
    int size;
    std::cout << "Введите размер массива: ";
    std::cin >> size;
    int *arr = new int[size];
    for (int i = 0; i < size; i++) {
        std::cout << "Введите элемент массива #" << i + 1 << ": ";
        std::cin >> arr[i];
    }
    func("Массив до сортировки: ",arr, size);
    my_sort(arr, size);
    func("Массив после сортировки: ",arr, size);
    delete[] arr;
    return 0;
}
void my_sort(int *arr, const int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}
void func(const char* const comment, int *arr, const int size) {
    std::cout << comment << std::endl;
    for (int i = 0;i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << '\n';
}