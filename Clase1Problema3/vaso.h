#ifndef VASO_H_INCLUDED
#define VASO_H_INCLUDED
#pragma once

#include <iostream>
#include "funciones.h"
#include <string>
#include "bidon.h"

using namespace std;

class vaso{
    private:
        int _codigoTamanio;
        float _capacidad;

    public:
        vaso();
        int getTamanio();
        float getCapacidad();
        void setCodigoTamanio(int CodigoTamanio);
        void setCapacidad(float capacidad);

};


#endif // VASO_H_INCLUDED
