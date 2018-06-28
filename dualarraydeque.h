#ifndef DUALARRAYDEQUE_H
#define DUALARRAYDEQUE_H
#include "arraystack.h"

template<class T>
class DualArrayDeque
{
protected:
    ArrayStack<T> front;
    ArrayStack<T> back;
    void balance();
public:
    DualArrayDeque();
    virtual ~DualArrayDeque();

    int size();
    T get(int i);
    T set(int i, T x);
    virtual void add(int i, T x);
    virtual T remove( int i );
    virtual void clear();
};

#endif // DUALARRAYDEQUE_H
