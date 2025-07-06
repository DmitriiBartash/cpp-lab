#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // Изменение кодировки консоли:
    system("chcp 1251>nul");
    // Отображение сообщения в консоли:
    cout<<"Programm on C++!"<< endl;
    // Задержка консольного окна:
    system("pause>nul");
    return 0;
}