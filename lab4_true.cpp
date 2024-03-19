#include <iostream>

template <typename T>

int findSecondMaxIndex(T* arr, int size) {
    if (size < 2) {
        std::cerr << "Ошибка: Размер массива должен быть не менее 2." << std::endl;
        return -1;
    }

    int maxIndex = 0;
    int secondMaxIndex = -1;

    for (int i = 1; i < size; ++i) {
        if (arr[i] > arr[maxIndex]) {
            secondMaxIndex = maxIndex;
            maxIndex = i;
        }
        else if (secondMaxIndex == -1 || arr[i] > arr[secondMaxIndex]) {
            secondMaxIndex = i;
        }
    }

    return secondMaxIndex;
}

int main() {
    setlocale(LC_ALL, "Russian");
    // Пример использования
    int intArr[] = { 1, 5, 3, 8, 6 };
    double doubleArr[] = { 1.1, 5.5, 3.3, 8.8, 6.6 };
    char charArr[] = { 'a', 'c', 'b', 'd', 'e' };

    std::cout << "Индекс второго максимального элемента в массиве int: " << findSecondMaxIndex(intArr, 5) << std::endl;
    std::cout << "Индекс второго максимального элемента в массиве double: " << findSecondMaxIndex(doubleArr, 5) << std::endl;
    std::cout << "Индекс второго максимального элемента в массиве char: " << findSecondMaxIndex(charArr, 5) << std::endl;

    return 0;
}
