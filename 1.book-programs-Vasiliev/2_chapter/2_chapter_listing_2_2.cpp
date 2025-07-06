#include <iostream>
#include <cstdlib>

int main()
{
    system("chcp 65001>null");
    int n, s, k;
    std::cout << "Введите верхнюю границу для суммы: ";
    std::cin >> n;
    for (k = 1, s = 0; k <= n; s += k * k, k++)
        ;
    std::cout << "Сумма квадратов чисел от 1 до " << n << ": " << s << std::endl;
    system("pause>nul");
    return 0;
}