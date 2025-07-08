// Напишите программу для вычисления суммы четных натуральных чисел с использованием оператора do-while
#include <iostream>

int main()
{
    // Изменение кодировки консоли:
    system("chcp 65001>null");

    int sum = 0, k = 0;

    std::cout << "Натуральные числа: ";
    do
    {
        std::cout << k <<" ";
        if (k % 2 == 0)
        {
            sum += k;
        }
        k++;

    } while (k <= 10);

    std::cout << std::endl;
    std::cout << "Сумма четных натуральных чмсел до 10 = " << sum;

    // Задержка консольного окна:
    system("pause>nul");
    return 0;
}