/* Напишите программу для вычисления значения натурального логарифма
ln(1+x) = x - (x^2/2) + (x^3/3) - (x^4/4) + ... + ((-1)^n+1 * x^n)/n */
#include <iostream>
#include <cmath>

double computeLn1x(double x, int terms = 100) {
    if (x <= -1) {
        // std::cerr — это стандартный поток вывода ошибок в C++
        std::cerr << "Для x <= -1 натуральный логарифм не определён." << std::endl;
        return -1; // Возвращаем -1 в случае ошибки
    }

    double sum = 0.0;
    double term = x; // Первый член ряда
    for (int n = 1; n <= terms; ++n) {
        sum += term;
        term *= -x / (n + 1); // Следующий член ряда
    }

    return sum;
}

int main() {
    // Изменение кодировки консоли:
    system("chcp 65001>null");

    double x;
    std::cout << "Введите значение x для вычисления ln(1+x): ";
    std::cin >> x;

    double result = computeLn1x(x);
    if (result != -1) {
        std::cout << "ln(1+" << x << ") = " << result << std::endl;
    }

    return 0;
}
