#include <iostream>
#include "funciones.h"
#include <string>
#pragma once

using namespace std;
#include "bidon.h"



bidon::bidon(){
    _sabor = "No asignado";
    _capacidad = 20;
    _cantidad = 0;
    _precioXlitro = 0;
    }

void bidon::setSabor(string nombreSabor){
    _sabor = nombreSabor;
}

void bidon::setCapacidad(float capacidad){
    _capacidad = capacidad;
}

void bidon::setCantidad(float cantidad){
    _cantidad = cantidad;
}

void bidon::setPrecioXlitro(float precioXlitro){
    _precioXlitro = precioXlitro;
}

string bidon::getSabor(){
    return _sabor;
}

void bidon::llenar(float cantidadAllenar){
    if(cantidadAllenar + _cantidad > _capacidad){
        _cantidad = _capacidad;
    }else{
        _cantidad += cantidadAllenar;
    }
}

float bidon::getCantidad(){
    return _cantidad;
}

void bidon::vaciar(){
    _cantidad = 0;
}
