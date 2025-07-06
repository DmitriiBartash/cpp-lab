#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    //Изменение кодировки консоли :
    system("chcp 151>nul");
    //Количество футов в миле :
    const int ftInMile=5280;
    //Количество километров в миле :
    const double kmInMile=1.609344;
    //Целочисленные переменные для записи количества миль, футов, километров и метров:
    int dMile, dFt, dKm, dM;
    //Ввод расстояния в милях и футах:
    cout<<"Distance in miles and feet."<<endl;
    cout<<"Miles: ";
    cin>>dMile;
    cout<<"Feet: ";
    cin>>dFt;
    //Расстояние в милях:
    double distMile=dMile+(double)dFt/ftInMile;
    //Расстояние в киллометрах:
    double distKm=distMile*kmInMile;
    //Только киломенты:
    dKm =(int)distKm;
    //Метры:
    dM=(int)((distKm-dKm)*1000);
    //Отобрадение результата вычислений:
    cout<<"Distance in km and m."<<endl;
    cout<<"Kilometers: "<<dKm<<endl;
    cout<<"Meters: "<<dM<<endl;
    //Заддержка консольного окна:
    system("pause>nul");
    return 0;
}