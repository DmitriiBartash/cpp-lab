#include <iostream>
#include <cstdlib>

int main()
{
    // Изменение кодировки консоли:
    system("chcp 65001>null");
    // Целочисленная переменная:
    int num;
    // Инициализация генератора случайных чисел:
    srand(2);
    // Оператор цикла:
    for (int k = 1; k <= 10; k++)
    {
        // Случайное число от 2 до 8:
        num = 2 + rand() % 7;
        // Оператор выбора:
        switch (num)
        {
        case 3:
        case 6:
            std::cout << num << ": число делится на три" << std::endl;
            break;
        case 2:
        case 4:
        case 8:
            std::cout << num << ": степень двойки" << std::endl;
            break;
        case 5:
            std::cout << num << ": пятерка" << std::endl;
            break;
        case 7:
            std::cout << num << ": семерка" << std::endl;
        }
    }
    // Задержка консольного окна:
    system("pause>nul");
    return 0;
}
