#include <iostream>

int factorial (int i)
{
    if(i==0) return 1;
    else return i*factorial(i-1);
}

int binomialinii_koff (int &k, int &n, int &C)
{
    k = n;
    while(k > 0)
    {
    C = factorial(n) / (factorial(k) * factorial(n - k));
    std::cout << "Pri " << k << " nijnem koeficente " << "C = " << C << "\n"; 
    k--;
    }
    return C;
}


int main()
{
    int k,n,C;
    std::cout << "Vvedite nijnii index- ";
    std::cin >> n;
    binomialinii_koff(k, n, C);

    return 0;
}