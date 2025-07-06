// Перевод из км и м , в мили или футы
#include <iostream>

int main()
{
    int km = 0;
    int m = 0;

    std::cout << "Vvedite km = ";
    std::cin >> km;
    std::cout << "Vvedite m = ";
    std::cin >> m;

    int scet_metrov = m + (km * 1000);

    double ft = scet_metrov * 3.28084;
    double mili = scet_metrov * 0.000621371;
    
    std::cout << "V " << km << " km i " << m << " metrah = " << mili  << " mili ili " << ft << " futov";


    return 0;
}