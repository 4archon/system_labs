#include <iostream>

struct st
{
    int a;
    int b;
};

class Person
{
public:
    std::string Name;

    Person(std::string n)
    {
        Name = n;
    }
};

template<typename T> void swap(T& first, T& second);

template<typename T> void swap(T& first, T& second)
{
    T tmp = first;
    first = second;
    second = tmp;
}