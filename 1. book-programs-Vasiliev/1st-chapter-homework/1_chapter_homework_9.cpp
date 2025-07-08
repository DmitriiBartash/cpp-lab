/*Переводим из саженей и аршин в метры и сантиметры
1 сажень = 2.16 метров
3 аршина = 1 сажень
1 метр = 100 сантиметров */

#include <iostream>

int main()
{
    int vvod_sajeni = 0, arsin = 0;
    double temp_sajeni;
    int metre, santimetre;

    std::cout << "Vvedite sajeni = ";
    std::cin >> vvod_sajeni;

    std::cout << "Vvedite arsini = ";
    std::cin >> arsin;

    std::cout << "V " << vvod_sajeni << " sajeniah i " << arsin << " arsinah" << std::endl;

    // Мат. преобразование :
    temp_sajeni = vvod_sajeni;
    vvod_sajeni = arsin / 3;
    temp_sajeni += vvod_sajeni;

    temp_sajeni *= 2.16;

    metre = temp_sajeni;

    santimetre = 100 * (temp_sajeni - metre);

    std::cout << metre << " metrov i " << santimetre << " santimetrov";

    return 0;
}