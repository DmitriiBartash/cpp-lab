//Перевод их саженей в метры

#include <iostream>

int main()
{
    int sajeni = 0;
    std::cout << "VVedite sajeni ";
    std::cin >> sajeni;

    int metri = sajeni * 2.16;

    std::cout << "\nV " << sajeni << " sajeniah = " << metri << " metrov";

    return 0;
}