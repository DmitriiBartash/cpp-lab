/* 
Напишите программу для решения квадратного уравнения вида Ax^2 + Bx + C = 0
(Предложить разные методы решения задачи)
*/
#include <iostream>
#include <cmath>

// Функция для ввода коэффициентов
void inputCoefficients(double &A, double &B, double &C) {
    std::cout << "Введите коэффициент A: ";
    std::cin >> A;
    std::cout << "Введите коэффициент B: ";
    std::cin >> B;
    std::cout << "Введите коэффициент C: ";
    std::cin >> C;
}

void solveUsingDiscriminant(double A, double B, double C) {
    double D = B * B - 4 * A * C;

    if (D > 0) {
        double x1 = (-B + sqrt(D)) / (2 * A);
        double x2 = (-B - sqrt(D)) / (2 * A);
        std::cout << "Метод дискриминанта: два различных корня: x1 = " << x1 << ", x2 = " << x2 << std::endl;
    } else if (D == 0) {
        double x = -B / (2 * A);
        std::cout << "Метод дискриминанта: один корень: x = " << x << std::endl;
    } else {
        std::cout << "Метод дискриминанта: уравнение не имеет вещественных корней." << std::endl;
    }
}

void solveUsingCompleteSquare(double A, double B, double C) {
    double D = B * B - 4 * A * C;
    double root_part = sqrt(fabs(D)) / (2 * A);
    double middle_term = -B / (2 * A);

    if (D > 0) {
        double x1 = middle_term + root_part;
        double x2 = middle_term - root_part;
        std::cout << "Метод выделения полного квадрата: два различных корня: x1 = " << x1 << ", x2 = " << x2 << std::endl;
    } else if (D == 0) {
        std::cout << "Метод выделения полного квадрата: один корень: x = " << middle_term << std::endl;
    } else {
        std::cout << "Метод выделения полного квадрата: уравнение не имеет вещественных корней, два комплексных корня." << std::endl;
    }
}

void solveUsingVieta(double A, double B, double C) {
    bool found = false;
    for (int x1 = -100; x1 <= 100; ++x1) {
        for (int x2 = -100; x2 <= 100; ++x2) {
            if (x1 + x2 == -B / A && x1 * x2 == C / A) {
                std::cout << "Метод Виета: Корни: x1 = " << x1 << ", x2 = " << x2 << std::endl;
                found = true;
                break;
            }
        }
        if (found) break;
    }
    if (!found) {
        std::cout << "Метод Виета: Невозможно разложить уравнение на множители в виде целых чисел. Используйте метод дискриминанта." << std::endl;
    }
}

int main() {
    double A, B, C;

    inputCoefficients(A, B, C);

    std::cout << "\nРешение квадратного уравнения методами:" << std::endl;

    solveUsingDiscriminant(A, B, C);
    solveUsingCompleteSquare(A, B, C);
    solveUsingVieta(A, B, C);

    return 0;
}
