#ifndef ARREGLO_H
#define ARREGLO_H

#include <iostream>
using namespace std;

template <class T>
class arreglo_dinamico{
    private:
    T *arreglo;
    size_t tam;
    size_t cont;
    const static size_t MAX = 5;
    void expandir();
    public:
    arreglo_dinamico();
    ~arreglo_dinamico();
    void insertar_final(const T& s);
    void insertar_inicio(const T& s);
    size_t size();
    string operator[](size_t p){
        return arreglo[p];
    }
};

template <class T>
arreglo_dinamico<T>::arreglo_dinamico(){
    arreglo = new T[MAX];
    cont = 0;
    tam = MAX;
}

template <class T>
arreglo_dinamico<T>::~arreglo_dinamico(){
    delete[] arreglo;
}

template <class T>
void arreglo_dinamico<T>::insertar_final(const T& s){
    if (cont == tam){
        expandir();         
    }
    arreglo[cont] = s;
    cont++;
}

template <class T>
void arreglo_dinamico<T>::insertar_inicio(const T& s){
    if (cont == tam){
        expandir();         
    }
    for (size_t i = cont; i > 0; i--){
        arreglo[i] = arreglo[i-1];
    }
    arreglo[0] = s;
    cont++;
}

template <class T>
void arreglo_dinamico<T>::expandir(){
    T *nuevo = new T[tam+MAX];

    for (size_t i = 0; i < cont; i++){
        nuevo[i] = arreglo[i];
    }
    delete[] arreglo;
    arreglo = nuevo;
    tam = tam + MAX;
}

template <class T>
size_t arreglo_dinamico<T>::size(){
    return cont;
}
#endif