#include <iostream>
#include "arreglo.h"
using namespace std;

int main(){
    arreglo_dinamico<string> arreglo;

    for(size_t i = 0; i < 1; i++){
       arreglo.insertar_final("tres");
    }

    arreglo.insertar_final("cuatro");
    arreglo.insertar_final("cinco");
    arreglo.insertar_inicio("uno");
    arreglo.insertar_inicio("cero");
    arreglo.insertar("dos", 2);
    arreglo.eliminar_inicio();
    arreglo.eliminar_final();
    arreglo.eliminar(1);
    for (size_t i = 0; i < arreglo.size(); i++){
        cout << arreglo[i] << " ";
    }
    cout <<endl;

}