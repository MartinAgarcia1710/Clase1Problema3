#ifndef BIDON,H_H_INCLUDED
#define BIDON,H_H_INCLUDED
#pragma once
#include <iostream>
#include "funciones.h"
#include <string>
#include "bidon.h"
#include "vaso.h"

using namespace std;

class bidon{
    private:
        string _sabor;
        float _capacidad;
        float _cantidad;
        float _precioXlitro;


    public:
        bidon();
        string getSabor();
        float getCapacidad();
        float getCantidad();
        float getPrecioXlitro();

        void setSabor(string nombreSabor);
        void setCapacidad(float capacidad);
        void setCantidad(float cantidad);
        void setPrecioXlitro(float precioXlitro);

        void llenar(float cantidadAllenar);

        void vaciar();


};

#endif // BIDON,H_H_INCLUDED
