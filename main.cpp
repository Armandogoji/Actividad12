#include <iostream>
#include "arreglo.h"
using namespace std;

int main(){
    arreglo_dinamico<string> arreglo;

    for(int i = 0; i < 100; i++){
        arreglo.insertar_final("a");
    }
    for (size_t i = 0; i < 100; i++){
        cout << arreglo[i] << " ";
    }
    cout <<endl;

}