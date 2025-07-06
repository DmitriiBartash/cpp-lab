//Программа чисел Фибоначчи
#include <iostream>

int Fibonasi(int klvo, int fib_1, int fib_2 , int fib_3)
{
    std::cout << "Vvedite kolicestvo cisel: ";
    std::cin >> klvo;
    fib_1 = 1, fib_2 = 1;
    std::cout << "Cisla Fibonaci: " << fib_1 << " " << fib_2 << " " ;
    for (int i=0; i < klvo - 2; i++)
    {

        fib_3 = fib_2 + fib_1;
        fib_1 = fib_2;
        fib_2 = fib_3;
        std::cout << fib_3 << " ";
    }

    return 0;
}

int main()
{
  int klvo, fib_1, fib_2, fib_3;
  Fibonasi(klvo, fib_1, fib_2, fib_3);
  return 0;
}