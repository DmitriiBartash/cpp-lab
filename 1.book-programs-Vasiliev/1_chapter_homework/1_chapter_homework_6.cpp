#include <iostream>

int main()
{
    int km = 0;
    double km_in_miles = 1.609344;
    double miles = 0;
    std::cout << "Vvedite km = ";
    std::cin >> km ;

    miles = km / km_in_miles;

    std::cout << "\nV " << km << " km = " << miles << " mili";
    return 0; 
}