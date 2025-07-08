/*Программа с функцией для вычисления суммы натуральных чисел*/
#include <iostream>

int sum()
{
    int number_a, number_b;

    // Ввод данных
    std::cout << "Input first number = ";
    std::cin >> number_a;

    std::cout << "Input second number = ";
    std::cin >> number_b;

    number_a += number_b;
    std::cout << "Sum of numbers is = " << number_a;

    return number_a;
}

int main()
{
    system("chcp 65001>null");

    sum();
    return 0;
}