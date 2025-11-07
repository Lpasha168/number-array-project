#include <iostream>
#include "operations.h"

// Вспомогательная функция для печати массива
void printArray(const NumberArray* arr) {
    if (arr == nullptr) {
        std::cout << "Array is null!" << std::endl;
        return;
    }

    std::cout << "Array [" << arr->size << "]: ";
    for (int i = 0; i < arr->size; i++) {
        std::cout << arr->data[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    using namespace ArrayOperations;

    std::cout << "=== Number Array Operations Demo ===" << std::endl;

    // 1. Создаем массив (функция Участника 1)
    NumberArray* numbers = createArray(6);
    if (numbers == nullptr) {
        std::cout << "Failed to create array!" << std::endl;
        return 1;
    }

    // Заполняем массив тестовыми данными
    numbers->data[0] = 2.5f;
    numbers->data[1] = -3.0f;
    numbers->data[2] = 4.0f;
    numbers->data[3] = -1.5f;
    numbers->data[4] = 6.0f;
    numbers->data[5] = -2.0f;

    std::cout << "\n1. Original array:" << std::endl;
    printArray(numbers);

    // 2. Применяем операцию квадрата (функция Участника 1)
    applyOperation(numbers, square);
    std::cout << "\n2. After squaring:" << std::endl;
    printArray(numbers);

    // 3. Фильтруем положительные числа (функция Участника 2)
    filterArray(numbers, isPositive);
    std::cout << "\n3. After filtering positive numbers:" << std::endl;
    printArray(numbers);

    // 4. Вычисляем сумму (функция Участника 2)
    float sum = reduceArray(numbers, add, 0.0f);
    std::cout << "\n4. Sum of array: " << sum << std::endl;

    // 5. Демонстрация с лямбда-выражением
    std::cout << "\n5. Using lambda expression:" << std::endl;

    // Лямбда-выражение: увеличить каждый элемент на 10
    auto addTen = [](float x) -> float {
        return x + 10.0f;
        };

    applyOperation(numbers, addTen);
    printArray(numbers);

    // 6. Очистка памяти (функция Участника 1)
    deleteArray(numbers);

    std::cout << "\n=== Demo completed ===" << std::endl;
    return 0;
}