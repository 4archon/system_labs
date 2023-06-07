#include <iostream>

template <typename T, int n>
void sort(T (&arr)[n])
{
    T arr_sorted[n+1]{};
    for(int i = 0; i < n; i++)
    {
        if(i==0) arr_sorted[i] = arr[i];
        else
        {
            for(int j = 0; j <= i; j++)
            {
                if(j==i)
                {
                    arr_sorted[j] = arr[i];
                    break;
                }
                if(arr[i] < arr_sorted[j])
                {
                    for(int j2 = i-1; j2 >=j; j2--)
                    {
                        arr_sorted[j2+1] = arr_sorted[j2];
                    }
                    arr_sorted[j] = arr[i];
                    break;
                }
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        arr[i] = arr_sorted[i];
    }
}


template <typename T, size_t n>
void print(T (&arr)[n])
{
    for(int i =0; i < n; i++)
    {
        std::cout << arr[i] << "\n";
    }
}