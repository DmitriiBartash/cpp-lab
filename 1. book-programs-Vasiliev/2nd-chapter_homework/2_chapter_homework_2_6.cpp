/*Напишите программу для вычисления значения синуса
sin(x) = x - (x^3 / 3!) + (x^5 / 5!) - (x^7 / 7!) + ... + ((-1)^n * x^(2n+1)/((2n+1)!)) */

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

// Функция для вычисления значения синуса с использованием ряда Тейлора
double computeSine(double x, int terms = 20) { // Увеличим количество членов ряда до 20
    double sum = 0.0;
    for (int n = 0; n < terms; ++n) {
        double term = pow(-1, n) * pow(x, 2 * n + 1) / factorial(2 * n + 1);
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

    // Вычисление синуса с использованием ряда Тейлора
    double taylorResult = computeSine(x);

    // Вычисление синуса с использованием стандартной функции sin
    double mathResult = sin(x);

    // Вывод результатов
    std::cout << "sin(" << x << ") = " << taylorResult << " (ряд Тейлора)" << std::endl;
    std::cout << "sin(" << x << ") = " << mathResult << " (функция sin)" << std::endl;

    // Сравнение результатов
    double difference = std::abs(taylorResult - mathResult);
    std::cout << "Разница: " << difference << std::endl;

    return 0;
}
