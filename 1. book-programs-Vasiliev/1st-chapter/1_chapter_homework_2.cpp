//Написать программу, в которой отображаются пять первых нечетных чисел
#include <iostream>                     
using namespace std;           
 
int main()
{
    int n;                     
 
    cout << "Input the value: ";  // выводится в окно консоли текст в кавычках
    cin >> n;                   // записываем в переменную n число
 
    // теерь нужно проверить четное число n или нечетное
    // ЕСЛИ четное, то отнять от него 1 (четные числа не нужны по условию)
    if (n%2 == 0) --n;          // операция % находит остаток от деления одного числа на другое. если этот остаток равен нулю, то из переменной n вычитается 1
                                // операция -- вычитает единицу из переменной n (n изменяется)
 
    // в этом цикле нужно вывести все нечетные числа от 1 до n (n - нечетное число)
    for (int i=1; i<=n; i+=2)         // в конце каждого цикла переменная n увеличивается на 2 (ведь четные числа не нужны)
        cout << i << " ";       // будет выведено 1 3 5 7 9 ... n
    cout << endl;               // переводит каретку в начало новой строки
 
    return 0;           // программа возвращает операционной системе значение 0
}




// #include <iostream>

// using namespace std;

// int main()
// {
//     int necCisla = 1;
//     while (necCisla <= 9)
//     {
//       cout<< necCisla << " ";
//       necCisla = necCisla + 2;
//     }

//     return 0;
// }