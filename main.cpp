#include <iostream>
#include "arreglo.h"
using namespace std;

int main(){
    arreglo_dinamico<string> arreglo;

    for(int i = 0; i < 5; i++){
        arreglo.insertar_final("a");
    }
    arreglo.insertar("b", 2);
    for (size_t i = 0; i < 5; i++){
        cout << arreglo[i] << " ";
    }
    cout <<endl;

}