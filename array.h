#ifndef ARRAY_H
#define ARRAY_H
#include <algorithm>

#include <stdlib.h>
#include <assert.h>
template<class T>
class Array
{
protected:
    T *a;
public:
    int length;
public:
    Array(int len = 10);
    Array(int len,T init);
    void fill(T x);
    virtual ~Array();

    Array<T>& operator=(Array<T> &b){
        if(a!= nullptr) delete[] a;
        a = b.a;
        b.a = nullptr;
        length = b.length;
        return *this;
    }

    T& operator[](int i){
        assert(i>=0 && i< length);
        //if(a >= 0 && i < length) return 0;
        return a[i];
    }

    T* operator+(int i){
        return &a[i];
    }

    void swap(int i, int j){
        T x = a[i];
        a[i] = a[j];
        a[j] = x;
    }

    static void copyOfRange(Array<T> &a0,Array<T> &a, int start, int end);

    virtual void reverse();

};

template<class T>
void Array<T>::fill(T x){
    std::fill(a,a+length,x);
}

template<class T>
Array<T>::Array(int len){
    if(len <= 0) this->length = 10;
    else this->length = len;
    a = new T[this->length];
}

template<class T>
Array<T>::Array(int len, T init):Array<T>(len){
//    Array<T>(len);
    for(int i = 0;i<this->length;i++){
        a[i] = init;
    }
}

template<class T>
void Array<T>::copyOfRange(Array<T> &a0, Array<T> &a, int start, int end){
    Array<T> b(end - start);
    std::copy(a.a,a.a + end - start, b.a);
    a0 = b;
}

template<class T>
void Array<T>::reverse(){
    for(int i = 0;i<length/2;i++){
       swap(i,length -1 -i);
    }
}

template<class T>
Array<T>::~Array(){
    if(a != nullptr) delete [] a;
}

void tesClasstArray();
#endif // ARRAY_H
