/*
Условие:
Пользователь вводит число от 1 до 10.
Программа проверяет, является ли это число числом Фибоначчи.
Числа Фибоначчи в этом диапазоне: 1, 2, 3, 5, 8
Используется оператор switch.
*/

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number from 1 to 10: ";
    cin >> num;

    switch (num)
    {
    case 1:
    case 2:
    case 3:
    case 5:
    case 8:
        cout << "This is a Fibonacci number." << endl;
        break;
    case 4:
    case 6:
    case 7:
    case 9:
    case 10:
        cout << "This is NOT a Fibonacci number." << endl;
        break;
    default:
        cout << "The number is out of the valid range (1–10)." << endl;
    }

    return 0;
}

/*
Использование switch-case обеспечивает быструю проверку без дополнительных условий.
Каждое значение case проверяет, входит ли число в известное множество чисел Фибоначчи (1, 2, 3, 5, 8).
Это решение эффективно, когда набор проверяемых значений мал и известен заранее.

Операция break предотвращает "проваливание" в другие ветки switch.
default используется для обработки ввода вне диапазона 1–10.
*/
