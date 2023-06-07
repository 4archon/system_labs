#include <iostream>
#include "swap.hpp"


int main()
{
    st s1;
    std::cout << "s1 ptr - " << &s1 << "\n";
    s1.a=11;
    s1.b=22;
    st s2;
    std::cout << "s2 ptr - " << &s2 << "\n";
    s2.a=33;
    s2.b=44;
    std::cout << "s1 " << s1.a << " " << s1.b << "\n";
    std::cout << "s2 " << s2.a << " " << s2.b << "\n";
    swap(s1, s2);
    std::cout << "s1 " << s1.a << " " << s1.b << "\n";
    std::cout << "s2 " << s2.a << " " << s2.b << "\n";
    std::cout << "s1 ptr - " << &s1 << "\n";
    std::cout << "s2 ptr - " << &s2 << "\n";
    int a, b;
    a = 10;
    b = 20;
    std::cout << "a - " << a << "\n";
    std::cout << "b - " << b << "\n";
    swap(a,b);
    std::cout << "a - " << a << "\n";
    std::cout << "b - " << b << "\n";
    Person Tom("Tom");
    Person Nino("Nino");
    std::cout << "Tom's name - " << Tom.Name << "\n";
    std::cout << "Nino's name - " << Nino.Name << "\n";
    swap(Tom, Nino);
    std::cout << "Tom's name - " << Tom.Name << "\n";
    std::cout << "Nino's name - " << Nino.Name << "\n";
}