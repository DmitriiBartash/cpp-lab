// Напишите программу для вычисления наибольшего общего делителя двух чисел

#include <iostream>

int main()
{
    // Изменение кодировки консоли:
    system("chcp 65001>null");

    int number_1 = 0, number_2 = 0, high, result = 0;

    std::cout << "Введите первое целое число : ";
    std::cin >> number_1;

    std::cout << "Введите второе целое число : ";
    std::cin >> number_2;

    std::cout << "Укажите верхний порог чисел : ";
    std::cin >> high;

    for (int k = 1; k <= high; k++)
    {
        if (k % number_1 == 0 && k % number_2 == 0)
        {
            result = k;
        }
    }

    if (result == 0)
    {
        std::cout << "Нет ни одного общего делителя для двух чисел ";
    }
    else
    {
        std::cout << "Наибольший общий делитель для двух чисел : " << result;
    }

    // Задержка консольного окна:
    system("pause>nul");
    return 0;
}