#ifndef UTILS_H
#define UTILS_H

template<class T> inline
T min(T a,T b){
    return ((a) < (b)) ? (a) :(b);
}

template<class T> inline
T max(T a,T b){
    return ((a) > (b)) ? (a) :(b);
}

template<class T> inline
int compare(T &x, T &y){
    if(x < y) return -1;
    if(x > y) return 1;
    return 0;
}

template<class T> inline
bool equals(T &x, T &y){
   return x == y;
}

inline unsigned intVal(int x){
    return (unsigned)x;
}

int hashCode(int x){
    return 0;
}
#endif // UTILS_H
