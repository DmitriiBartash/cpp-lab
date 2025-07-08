/*Программа с функцией для перевода скорости указанной в км/ч в м/с
в 1 километре - 1000 метров.
в 1 минуте - 60 секунд.
в 1 часе - 60 минут. */
#include <iostream>

int calculate()
{
    int speed;
    double temp_speed;

    // Ввод данных
    std::cout << "Укажите скорость в км/ч = ";
    std::cin >> speed;

    // Мат.преобразование
    temp_speed = speed * 1000 / 3600;

    std::cout << "В " << speed << " км/ч = " << temp_speed << " м/с";

    return temp_speed;
}

int main()
{
    system("chcp 65001>null");

    calculate();
    return 0;
}