// Напишите программу, которой при выполнении в консольное окно выводиятся натуральные числа от 1 до 10

#include <iostream>

using namespace std;

int main()
{
    int natCis = 0;
    while (natCis < 10)
    {
      natCis++;
      cout<< natCis << " ";
    }
    return 0;
}