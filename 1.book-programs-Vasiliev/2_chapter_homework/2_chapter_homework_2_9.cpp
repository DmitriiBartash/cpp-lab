/* Напишите программу для вычисления значения гиперболического косинуса
cosh(x) = 1 + (x^2 / 2!) + (x^4 / 4!) + (x^6 / 6!) + ... + (x^(2n) / (2n)!)
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

// Функция для вычисления значения гиперболического косинуса с использованием ряда Тейлора
double computeCosh(double x, int terms = 20) {
    double sum = 1.0;
    double term = 1.0; // Первый член ряда (cosh(0) = 1)
    for (int n = 1; n <= terms; ++n) {
        term *= (x * x) / ((2 * n - 1) * (2 * n)); // Следующий член ряда
        sum += term;
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

    // Вычисление гиперболического косинуса с использованием ряда Тейлора
    double taylorResult = computeCosh(x);

    // Вычисление гиперболического косинуса с использованием стандартной функции cosh
    double mathResult = cosh(x);

    // Вывод результатов
    std::cout << "cosh(" << x << ") = " << taylorResult << " (ряд Тейлора)" << std::endl;
    std::cout << "cosh(" << x << ") = " << mathResult << " (функция cosh)" << std::endl;

    // Сравнение результатов
    double difference = std::abs(taylorResult - mathResult);
    std::cout << "Разница: " << difference << std::endl;

    return 0;
}
