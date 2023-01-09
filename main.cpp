#include <iostream>
#include "Header.h"


int main()
{
    int a = 1;
    int b = 2;
    task1(&a, &b);
    std::cout << a << std::endl;
    std::cout << b << std::endl;

    int arr[10] = { -2, 1, -5, 2, 3, -3, -1, 1, -2, 1 };
    task5(arr[10]);
}
