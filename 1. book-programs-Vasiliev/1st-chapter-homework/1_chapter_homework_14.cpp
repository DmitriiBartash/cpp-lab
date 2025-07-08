/*Программа в которой создаётся массив и заполняется чётными натуральными числами*/

#include <iostream>

int sum_evens()
{
    int array[5], count=0, count_array=0;

    std::cout << "Even numbers in array are: ";

    while (count<10)
    {
        if (count % 2 == 0)
        {
            array[count_array] = count;
            std::cout << array[count_array] << " ";
            count_array ++;
        }
       count++;
    }
    
    return 0;
}

int main()
{
    system("chcp 65001>null");

    sum_evens();
    return 0;
}