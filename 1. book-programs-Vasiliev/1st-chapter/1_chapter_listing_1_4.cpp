//Функции

#include <iostream>
#include <cstdlib>

using namespace std;

//Функция для считывания расстояния в милях:
double getDistMile()
{
    // Переменная для записи результата функции:
    double dist;
    // Запрос на ввод расстояния в милях:
    cout<<"Indicate the distance in miles: ";
    // Считывание значения для расстояния в милях:
    cin>>dist;
    // Результат функции:
    return dist;
}

//Функция для перевода милей в километры:
double getDistKm(double dist)
{
    // В одной миле километров:
    double kmInMile=1.609344;
    // Рехультат функции:
    return dist*kmInMile;
}

int main()
{
    // Измененение кодировки консоли:
    system("chcp 1251>nul");
    // Переменная для записи расстояния в милях:
    double distMile = getDistMile();
    // Выполнение вычислений:
    cout<<"Distance (in km) : "<<getDistKm(distMile)<<endl;
    // Задержка консольного окна:
    system("pause>nul");
    return 0;
}