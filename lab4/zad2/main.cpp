#include <iostream>
#include "sort.h"

int main()
{
    std::cout << "Сортировка массива целых чисел\n";
    int ar[]{10,40,23,24,8,-20,-10};
    print(ar);
    std::cout << "---------------\n";
    sort(ar);
    print(ar);
    std::cout << "---------------\n";
    std::cout << "Сортировка массива double чисел\n";
    double ar_double[]{200.100, 0.2121, -8.24, -9.20, 5.1, 5.0};
    print(ar_double);
    std::cout << "---------------\n";
    sort(ar_double);
    print(ar_double);
    std::cout << "---------------\n";
    std::cout << "Сортировка массива строк\n";
    std::string ar_string[]{"BB", "CC", "Q", "AA", "A", "Eq", "a", "cc", "aa", "bb"};
    print(ar_string);
    std::cout << "---------------\n";
    sort(ar_string);
    print(ar_string);

}