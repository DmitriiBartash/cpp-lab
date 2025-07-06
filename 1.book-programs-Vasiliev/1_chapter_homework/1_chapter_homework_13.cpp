/* Программа с функцией для вычисления суммы нечётных натуральных чисел */

#include <iostream>

int sum_odd()
{
    int number_a = 0, count = 0;
    while (count < 10)
    {
        if (count % 2 != 0)
        {
            number_a += count;
        }
        count++;
    }

    std::cout << "Sum of odd numbers is " << number_a;
    return number_a;
}

int main()
{
    system("chcp 65001>null");

    sum_odd();
    return 0;
}