#include <iostream>
#include <cstdlib>

int main()
{
    // Изменение кодировки консоли:
    system("chcp 65001>null");
    // Инициализация генератора случайных чисел
    srand(2);

    // Создание массива:
    int nums[12];
    std::cout << "Массив случайных чисел:\n";

    // Цикл по коллекции:
    for (int &x : nums)
    {
        x = rand() % 10;       // Случайное число от 0 до 9
        std::cout << x << " "; // Отображение значения элемента
    }
    std::cout << std::endl;
    // Переменная для записи размера массива:
    int length = 0;
    // Цикл по коллекции:
    for (int &x : nums)
    {
        length++;
    }

    std::cout<<"Размер массива: "<<length<<std::endl;
    std::cout<<"Проверка содержимого массива:\n";

    // Обычный опреатор цикла:
    for (int k=0; k<length; k++)
    {
        std::cout<<nums[k]<<" ";
    }

    std::cout<<std::endl;

    // Задержка консольного окна:
    system("pause>nul");
    return 0;
}