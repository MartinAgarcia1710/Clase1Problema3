#include <iostream>
#include "funciones.h"
#include <string>
#include "bidon.h"
#include "vaso.h"
using namespace std;

void definicionDeBidones(bidon vectorBidones[], int cantidadBidones){
    string sabor;
    float capacidad;
    float precioPorLitro;

    for(int x = 0; x < cantidadBidones; x++){
        cout << "Ingresar sabor del bidon" << endl;
        cin >> sabor;
        vectorBidones[x].setSabor(sabor);
        cout << "Ingresar la capacidad total del bidon" << endl;
        cin >> capacidad;
        vectorBidones[x].setCapacidad(capacidad);
        cout << "Ingresar el precio por Litro del sabor que contiene el bidon" << endl;
        cin >> precioPorLitro;
        vectorBidones[x].setPrecioXlitro(precioPorLitro);
    }
}

void llenarBidones(bidon vectorBidones[], int cantidadBidones){
    int opcion;
    int cantidadAllenar;
    cout << "-----------------------------------------" << endl;
    cout << "BIDONES DISPONIBLES" << endl;
    for(int x = 0; x < cantidadBidones; x++){
        cout << x+1 << ". " << vectorBidones[x].getSabor() << endl;
    }
    cout << "0. SALIR " << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Que bidon quiere llenar?" << endl;
    cin >> opcion;
    while(opcion != 0){
        cout << "Ingrese la cantidad " << endl;
        cin >> cantidadAllenar;
        vectorBidones[opcion-1].llenar(cantidadAllenar);
        cout << "Que bidon quiere llenar?" << endl;
        cin >> opcion;
    }
}

void mostrarNiveldeBidones(bidon vectorBidones[], int cantidadBidones){
    for(int x = 0; x < cantidadBidones; x++){
        cout << x + 1 << ". " << vectorBidones[x].getCantidad() << endl;
    }

}

void vaciarBidones(bidon vectorBidones[], int cantidadBidones){
    int opcion;
    int cantidadAllenar;
    cout << "-----------------------------------------" << endl;
    cout << "BIDONES DISPONIBLES" << endl;
    for(int x = 0; x < cantidadBidones; x++){
        cout << x+1 << ". " << vectorBidones[x].getSabor() << endl;
    }
    cout << "0. SALIR " << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Que bidon quiere vaciar?" << endl;
    cin >> opcion;
    while(opcion != 0){

        vectorBidones[opcion-1].vaciar();
        cout << "Que bidon quiere llenar?" << endl;
        cin >> opcion;
    }
}

void CargaVentas(bidon vectorBidones[], vaso vectorVasos[], int cantidadBidones, float recaudacion[]){
    int codigoVaso;
    int codigoSabor;

    cout << "OPCIONES DE SABORES" << endl;
    for(int x = 0; x < cantidadBidones;x++){
        cout << x + 1 << vectorBidones[x].getSabor() << ". " << endl;
    }
    cout << "CODIGOS DE CAPACIDAD DE VASOS" << endl;
    for(int x = 0; x < 3; x++){
        cout << x + 1 << vectorVasos[x].getCapacidad() << endl;
    }
    cout << "Ingrese codigo de tamaño de vaso" << endl;
    cin >> codigoVaso;

    while(codigoVaso !=0){
        cout << "Ingrese el sabor a servir" << endl;
        cin >> codigoSabor;
        ///vectorBidones[codigoSabor-1].getCantidad() -= vectorVasos[codigoVaso-1].getCapacidad();
        recaudacion[codigoSabor-1] += vectorVasos[codigoVaso-1].getCapacidad() * vectorBidones[codigoSabor-1].getPrecioXlitro();
        cout << "Ingrese codigo de tamaño de vaso" << endl;
        cin >> codigoVaso;

    }
}



