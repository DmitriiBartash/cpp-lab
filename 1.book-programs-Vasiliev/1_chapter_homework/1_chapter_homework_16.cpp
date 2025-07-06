/* Программа в которой создаётся массив и заполняется квадратами натуральных чисел */

#include <iostream>

int array_squares()
{
    int array[10], count = 0, count_array = 0;

    std::cout << "Squares of numbers in array are: ";

    while (count < 10)
    {
        array[count_array] = count * count;
        std::cout << array[count_array] << " ";
        count_array++;
        count++;
    }
    
    return 0;
}

int main()
{
    system("chcp 65001>null");

    array_squares();
    return 0;
}