#include <iostream>
#include <limits>

using u64 = unsigned long long;

u64 sum_of_divisors(u64 n)
{
    if (n == 0)
        return 0;    // договоримся: для 0 возвращаем 0
    u64 sum = 1 + n; // пара (1, n) есть всегда; корректно и для n=1 (даёт 2? см. ниже)

    if (n == 1)
        return 1; // корректировка: делители 1 — только {1}

    // Перебираем возможные делители, начиная с 2
    for (u64 i = 2; i <= n / i; ++i)
    {
        if (n % i == 0)
        {
            u64 j = n / i; // парный делитель
            sum += i;
            if (j != i)
                sum += j;
        }
    }
    return sum;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    u64 n;
    if (std::cin >> n)
    {
        std::cout << sum_of_divisors(n) << "\n";
    }
    return 0;
}
