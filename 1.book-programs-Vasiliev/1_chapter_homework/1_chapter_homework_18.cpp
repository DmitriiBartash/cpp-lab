/*Написать программу, в которой создаётся массив, которы заполняется числами Фиббоначчи первые два числа 0 и 1,
а остальные сумма двух предыдущих (1 1 2 3 5 8 13)*/
#include <iostream>

int Fibonaci()
{
    int array[10]{0}, count = 0, count_last = 0, count_next = 0;

    std::cout << "Fibonacci sequence in array is: ";

    while (count < 10)
    {
        if (count < 2)
        {
            array[count] = 1;
            std::cout << array[count] << " ";
        }
        else
        {
            array[count] = array[count - 1] + array[count - 2];
            std::cout << array[count] << " ";
        }
        count++;
    }

    return 0;
}

int main()
{
    system("chcp 65001>null");

    Fibonaci();
    return 0;
}