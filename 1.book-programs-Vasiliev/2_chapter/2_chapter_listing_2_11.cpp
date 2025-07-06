#include <iostream>
#include <cstdlib>

int main()
{
    // Изменение кодировки консоли:
    system("chcp 65001>null");
    std::cout << "Решение уравнения Ax = B\n";

    // Параметры уравнения:
    double A, B;
    // Считывание значений для параметров уравнения:
    std::cout << "A = ";
    std::cin >> A;
    std::cout << "B = ";
    std::cin >> B;
    // Контролируемый блок кода:
    try
    {
        if(A!=0)
        {
            // Генерирование исключения:
            throw A;
        }
        if(B!=0)
        {
            // Генерирование исключения:
            throw "Решений нет";
        }
        std::cout<<"Решение - любое число"<<std::endl;
    }
    // Обработка числового исключения:
    catch(double e)
    {
        std::cout<<"Решение уравнения: "<<B/e<<std::endl;
    }

    // Обработка текстового исключения:
    catch(char* e)
    {
        std::cout<<e<<std::endl;
    }

    // Задержка консольного окна:
    system("pause>nul");
    return 0;
}