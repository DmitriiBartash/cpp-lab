/*Написать программу, в которой создаётся массив. Массив заполняется поэлементно: Пользователь для каждого элемента ввод значение с клавиатуры
Организовать ввод значений для элементов массива с привлечением оператора цикла).*/

#include <iostream>

int array_input()
{
    int count_elements = 0;
    int const max_size = 10;
    std::cout << "Input number of elements in array (max_size=10) = ";
    std::cin >> count_elements;
    int array[max_size]{}, count = 0 , element;

    while (count < count_elements)
    {
        std::cout << "Input [" << count << "] element of array = ";
        std::cin >> array[count];
        count++;
    }

    count = 0;
    std::cout << "Your array is = ";
    while (count < count_elements)
    {
        std::cout << array[count] << " ";
        count++;
    }
    return 0;
}

int main()
{
    system("chcp 65001>null");

    array_input();
    return 0;
}