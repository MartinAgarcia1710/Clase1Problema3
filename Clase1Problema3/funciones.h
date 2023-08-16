#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#pragma once
#include <iostream>
#include "funciones.h"
#include <string>
#include "bidon.h"
#include "vaso.h"

using namespace std;

void definicionDeBidones(bidon vectorBidones[], int cantidadBidones);
void llenarBidones(bidon vectorBidones[], int cantidadBidones);
void mostrarNiveldeBidones(bidon vectorBidones[], int cantidadBidones);
void vaciarBidones(bidon vectorBidones[], int cantidadBidones);
 void CargaVentas(bidon vectorBidones[], vaso vectorVasos[], int cantidadBidones, float recaudacion[]);

#endif // FUNCIONES_H_INCLUDED
