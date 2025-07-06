#include <iostream>
#include <cstdlib>

int main()
{
    // Изменение кодировки консоли:
    system("chcp 65001>null");
    // Целочисленные переменные:
    int n = 10, s = 0, k = 1;

start: // Метка
    s += k * k;
    if (k < n)
    {
        k++;
        // Переход к месту, обозначенной меткой:
        goto start;
    }

    // Отображение результата вычислений:
    std::cout << "Сумма квадратов чисел от 1 до " << n << ": " << s << std::endl;

    // Задержка консольного окна:
    system("pause>nul");
    return 0;
}