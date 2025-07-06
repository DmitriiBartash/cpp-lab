/* Написать программу, в которой создаётся массив. Массив заполняется так: элементы с четными индексами значением получают индекс, а элементы
с нечётными индексами значением получают квадрат индекса. Другими словами, массив заполняется числами: 0, 1^2, 2, 3^2, 4.*/

#include <iostream>

int array_task()
{
    int array[10]{0}, count = 0;

    std::cout << "Array with indexes is: ";

    while (count < 10)
    {
        if (count % 2 != 0)
        {
            array[count] = count * count;
            std::cout << array[count] << " ";
        }
        else
        {
            array[count] = count;
            std::cout << array[count] << " ";
        }
        count++;
    }

    return 0;
}

int main()
{
    system("chcp 65001>null");

    array_task();
    return 0;
}