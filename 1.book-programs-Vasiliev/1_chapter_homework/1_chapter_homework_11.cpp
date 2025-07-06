/* Программа с функцией для перевода скорости, указанной в м/с в км/ч */
#include <iostream>

int calculate()
{
    int speed;
    double temp_speed;

    // Ввод данных
    std::cout << "Укажите скорость в м/с = ";
    std::cin >> speed;

    // Мат.преобразование
    temp_speed = speed * 3.6;

    std::cout << "В " << speed << " м/с = " << temp_speed << " км/ч";

    return temp_speed;
}

int main()
{
    system("chcp 65001>null");

    calculate();
    return 0;
}