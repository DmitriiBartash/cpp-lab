// Программа выводит числа которые при делении на 4 в остатке дают 3. Пользователь вводит с клавиатуры количество чисел.
#include <iostream>

int Data(int k, int result)
{
    std::cout << "Vvedite kolicestvo cisel: ";
    std::cin >> k;

    std::cout << "Cisla pri delenie na 4 daiusie ostatok 3 :";
    while (k >= 0)
    { 
       result = 4 * k + 3;
       if(result % 4 == 3)
       {
          std::cout << result << " " ;
       }
       k--;
    }
   return 0;
}

int main()
{
    int k, result;
    Data(k, result);
    return 0;
}