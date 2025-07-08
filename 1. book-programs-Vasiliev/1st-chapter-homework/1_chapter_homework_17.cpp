/* Программа, в которой создаётся массив и заполняется степенями двойки (значение 2^0, 2^1, 2^2, 2^3)*/
#include <iostream>

/*Variant a*/
int array_squares_two()
{
    int array[10]{0}, count = 0, count_array = 0;

    std::cout << "Squares of numbers in array are: ";

    while (count < 10)
    {
        if (count == 0)
        {
            array[count] = 1;
            std::cout << array[count] << " ";
        }
        else
        {
            array[count] = array[count - 1] * 2;
            std::cout << array[count] << " ";
        }
        count++;
    }

    return 0;
}

int main()
{
    system("chcp 65001>null");

    array_squares_two();
    return 0;
}