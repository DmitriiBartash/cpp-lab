#include <iostream>
#include <cstdlib>

int main()
{
    // Изменение кодировки консоли:
    system("chcp 65001>null");

    // Целочисленные переменные:
    int num, k;
    // Выполняется оператор цикла:
    for (k = 1; k <= 5; k++)
    {
        std::cout << "Укажите число от 1 до 3: ";
        // Считывание значения переменной:
        std::cin >> num;
        // Выполняется оператор выбора:
        switch (num)
        {
        case 1:
            std::cout << "Это единица" << std::endl;
            break;
        case 2:
            std::cout << "Это двойка" << std::endl;
             break;
        case 3:
            std::cout << "Это тройка" << std::endl;
             break;

        default:
            std::cout << "Я не знаю такого числа" << std::endl;
        }
    }

    // Задержка консольного окна:
    system("pause>nul");
    return 0;
}