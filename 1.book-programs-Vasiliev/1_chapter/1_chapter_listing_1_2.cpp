#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
   // Измененик кодировки консоли:
   system("chcp 1251>nul");
   // Константа определяет сколько в одной милле киллометров:
   const double kmInMile = 1.609344;
   // Переменная для записи расстояния в миллях и киллометрах:
   double distMile, distKm;
   // Запрос на ввод расстояния в миллях:
   cout<<"Indicate the distance in miles: ";
   // Считывание значения для расстояния в милях:
   cin>>distMile;
   // Вычисление расстояния в километрах:
   distKm=distMile*kmInMile;
   // Отображение результата вычислений:
   cout<<"Distance (in km) : "<<distKm<<endl;
   // Заддержка консольного окна:
   system("pause>nul");
   return 0;
}