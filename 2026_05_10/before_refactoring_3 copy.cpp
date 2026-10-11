#include <iostream>

void printArray(const char* const comment, int a[], int size);

int main() {
    int size;
    std::cout << "Введите размер массива: ";
    std::cin >> size;
    int* a = new int[size];
    for (int i = 0; i < size; i++) {
        std::cin >> a[i];
    }

    printArray("Элементы массива до перестановки ", a, size);
    for (int i = 0; i < size / 2; i++) {
        std::swap(a[i], a[size - i - 1]);
    }

    printArray("Элементы массива после перестановки ", a, size);

    delete[] a;
    return 0;
}

void printArray(const char* const comment, int a[], int size)
{
    std::cout << comment;
    for (int i = 0; i < size; i++) {
        std::cout << a[i] << ' ';
    }
    std::cout << std::endl;
}