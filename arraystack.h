#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H
#include "array.h"
template<class T>
class DualArrayDeque;

template<class T>
class ArrayStack
{
protected:
    friend class DualArrayDeque<T>;
    Array<T> a;
    int n;

    virtual void resize();
public:
    ArrayStack();
    ~ArrayStack();
    int size();
    T get(int i);
    T set(int i,T x);

    virtual void add (int i, T x);
    virtual void add(T x) { add(size(),x); }
    virtual T remove(int i);
    virtual void clear();
};

template<class T>
ArrayStack<T>::ArrayStack():a(1){
    n = 0;
}

template<class T>
ArrayStack<T>::~ArrayStack(){

}
template<class T>
int ArrayStack<T>::size(){
    return n;
}

template<class T>
T ArrayStack<T>::get(int i){
    return a[i];
}
template<class T>
T ArrayStack<T>::set(int i,T x){
    T y = a[i];
    a[i] = x;
    return y;
}
template<class T>
void ArrayStack<T>::add (int i, T x){

}

template<class T>
T ArrayStack<T>::remove(int i){
    return a[i];
}
template<class T>
void ArrayStack<T>::clear(){
    return ;
}

#endif // ARRAYSTACK_H
