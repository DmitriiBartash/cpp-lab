#include <iostream>
#include <cstdlib>

int main()
{
    system("chcp 65001>null");
    int n, s = 0, k = 1;
    std::cout << "Введите верхнюю границу для суммы: ";
    std::cin >> n;
    for (;;)
    {
        s += k * k;
        k++;
        if (k > n)
        {
            break;
        }
    }

    std::cout << "Сумма квадратов чисел от 1 до " << n << ": " << s << std::endl;
    system("pause>nul");
    return 0;
}