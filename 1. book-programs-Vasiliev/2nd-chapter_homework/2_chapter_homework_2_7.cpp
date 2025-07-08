/*Напишите программу для вычисления значения косинуса
cos(x) = 1 - (x^2/2!) + (x^4/4!) - (x^6/6!) + ... + ((-1)^n x^(2n)) / ((2n)!) */

#include <iostream>
#include <cmath>

// Определение константы PI
const double PI = 3.14159265358979323846;

// Функция для вычисления факториала
unsigned long long factorial(int n) {
    if (n == 0) return 1;
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// Функция для вычисления значения косинуса с использованием ряда Тейлора
double computeCosine(double x, int terms = 20) {
    double sum = 0.0;
    for (int n = 0; n < terms; ++n) {
        double term = pow(-1, n) * pow(x, 2 * n) / factorial(2 * n);
        sum += term;
    }
    return sum;
}

int main() {
    // Изменение кодировки консоли:
    system("chcp 65001>null");

    double x;
    std::cout << "Введите значение x (в радианах): ";
    std::cin >> x;

    // Нормализация значения x в диапазоне [-pi, pi]
    x = fmod(x, 2 * PI);
    if (x > PI) {
        x -= 2 * PI;
    } else if (x < -PI) {
        x += 2 * PI;
    }

    // Вычисление косинуса с использованием ряда Тейлора
    double taylorResult = computeCosine(x);

    // Вычисление косинуса с использованием стандартной функции cos
    double mathResult = cos(x);

    // Вывод результатов
    std::cout << "cos(" << x << ") = " << taylorResult << " (ряд Тейлора)" << std::endl;
    std::cout << "cos(" << x << ") = " << mathResult << " (функция cos)" << std::endl;

    // Сравнение результатов
    double difference = std::abs(taylorResult - mathResult);
    std::cout << "Разница: " << difference << std::endl;

    return 0;
}
