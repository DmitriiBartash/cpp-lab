/* Напишите программу для вычисления значения выражения
(exp(x) - 1) / x = 1 + (x / 2!) + (x^2 / 3!) + (x^3 / 4!) + ... + (x^n / (n + 1)!)
*/

#include <iostream>
#include <cmath>
#include <limits>

// Функция для вычисления значения выражения (exp(x) - 1) / x с использованием ряда Тейлора
double computeExpression(double x, int terms = 100) {
    if (x == 0) return 1.0; // Специальный случай для x = 0

    double sum = 1.0;
    double term = x; // Первый член ряда
    for (int n = 2; n <= terms; ++n) {
        term *= x / n; // Следующий член ряда
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

    // Увеличение количества членов ряда для улучшения точности
    int terms = 100;

    // Вычисление выражения с использованием ряда Тейлора
    double taylorResult = computeExpression(x, terms);

    // Вычисление выражения с использованием стандартной функции exp
    double mathResult = (std::exp(x) - 1) / x;

    // Вывод результатов
    std::cout << "(exp(" << x << ") - 1) / " << x << " = " << taylorResult << " (ряд Тейлора)" << std::endl;
    std::cout << "(exp(" << x << ") - 1) / " << x << " = " << mathResult << " (функция exp)" << std::endl;

    // Сравнение результатов
    double difference = taylorResult - mathResult;
    std::cout << "Разница: " << difference << std::endl;

    return 0;
}
