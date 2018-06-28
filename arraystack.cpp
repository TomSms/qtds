#include "arraystack.h"
#include <iostream>
void testArrayStack()
{
    std::cout << "enter func:" << __func__ << std::endl;
    ArrayStack<int> a;

    a.add(10);

    for(int i = 0;i<10;i++){
        a.add(i*i);
    }

    std::cout <<"ArrayStack size:"<< a.size() << std::endl;

    for(int i = 0;i< 11;i++){
        std::cout << "I:" << a.remove(a.size()-1) << std::endl;
    }
}
