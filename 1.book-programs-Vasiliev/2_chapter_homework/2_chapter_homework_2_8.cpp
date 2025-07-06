/* Напишите программу для вычисления значения гиперболического синуса
sinh(x) = x + (x^3 / 3!) + (x^5 / 5!) + (x^7 / 7!) + ... + (x^(2n+1) / (2n+1)!)
*/

#include <iostream>
#include <cmath>
#include <limits>

// Функция для вычисления факториала
unsigned long long factorial(int n) {
    if (n == 0) return 1;
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// Функция для вычисления значения гиперболического синуса с использованием ряда Тейлора
double computeSinh(double x, int terms = 20) {
    double sum = 0.0;
    double term = x; // Первый член ряда
    for (int n = 1; n <= terms; ++n) {
        sum += term;
        term *= (x * x) / ((2 * n) * (2 * n + 1)); // Следующий член ряда
        if (std::abs(term) < std::numeric_limits<double>::epsilon()) {
            break;
        }
    }
    return sum;
}

int main() {
    // Изменение кодировки консоли:
    system("chcp 65001>null");

    double x;
    std::cout << "Введите значение x: ";
    std::cin >> x;

    // Вычисление гиперболического синуса с использованием ряда Тейлора
    double taylorResult = computeSinh(x);

    // Вычисление гиперболического синуса с использованием стандартной функции sinh
    double mathResult = sinh(x);

    // Вывод результатов
    std::cout << "sinh(" << x << ") = " << taylorResult << " (ряд Тейлора)" << std::endl;
    std::cout << "sinh(" << x << ") = " << mathResult << " (функция sinh)" << std::endl;

    // Сравнение результатов
    double difference = std::abs(taylorResult - mathResult);
    std::cout << "Разница: " << difference << std::endl;

    return 0;
}
