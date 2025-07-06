#include <iostream>
#include <cstdlib>

int main()
{
    system("chcp 65001>null");
    int n,s=0,k=1;
    std::cout<<"Введите верхнюю краницу для суммы: ";
    std::cin>>n;
    for (;k<=n;)
    {
        s+=k*k;
        k++;
    }
    std::cout<<"Сумма квадратов чисел от 1 до "<<n<<": "<<s<<std::endl;
    system("pause>nul");
    return 0;
}