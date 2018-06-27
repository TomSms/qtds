#include "array.h"

#include<iostream>

void tesClasstArray()
{
    Array<int> a(10);
    Array<int> b(10,10);

    Array<int> c(10);

    for(int i = 0;i< 10;i++){
        std::cout << a[i] << std::endl;
    }

    Array<int>::copyOfRange(a,b,0,10);

    for(int i = 0;i< 10;i++){
        std::cout << a[i] << std::endl;
    }

    c = a;
    for(int i = 0;i< 10;i++){
        std::cout << c[i] << std::endl;
    }
}
