#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // Изменение кодировки консоли:
    system("chcp 1251>nul");
    // Верхняя граница суммы и значение суммы:
    int n,s=0;
    // Ввод значения для верхней границы ряда:
    cout<<"Upper limit of sum: ";
    cin>>n;
    // Оператор цикла для вычисления суммы:
    while(n)
    {
        //Добавление нового слагаемого к сумме:
        s+=n*n;
        //Уменьшение (на 1) значения переменной:
        n--;
    }
    // Отображение результата вычислений:
    cout<<"Sum of squares: "<<s<<endl;
    // Задержка консольного окна:
    system("pause>nul");
    return 0;
}