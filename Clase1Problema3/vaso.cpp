/*


*/

#include <iostream>
using namespace std;
#include "vaso.h"
#include "bidon.h"
#include "funciones.h"
void vaso::setCapacidad(float capacidad){
    _capacidad = capacidad;
}

float vaso::getCapacidad(){
    return _capacidad;
}

void vaso::setCodigoTamanio(int tamanio){
    _codigoTamanio = tamanio;
}

int vaso::getTamanio(){
    return _codigoTamanio;
}

vaso::vaso(){
    _codigoTamanio = 0;
    _capacidad = 0.15;
}
