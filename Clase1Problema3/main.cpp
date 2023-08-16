/*
Un comerciante que tiene una tienda en la que vende batidos a turistas. En la tienda se venden 3
tipos de batidos con diferentes sabores, los cuales se almacenan en bidones de diferentes tamaños:
un bidón de 20L con sabor a "Banana", un bidón de 35L con sabor a "Ananá" y un bidón de 44L con sabor a "Sandia".

Al inicio de cada día, los 3 bidones se llenan completamente para comenzar a vender. Cada vez que se hace una
venta, se registra el código de batido y el tipo de vaso que el cliente desea: el código de batido puede ser 1
para "Banana", 2 para "Ananá" o 3 para "Sandia", mientras que el tipo de vaso puede ser 1 para 150 ml, 2 para
200 ml o 3 para 300 ml.

Cada venta que se realiza implica el descuento de una cantidad de litros del bidón correspondiente al sabor
y tamaño del vaso elegido. Además, se debe tener en cuenta que no se pueden realizar ventas si no hay suficiente
batido en el bidón correspondiente.

Al final del día, se debe leer el nivel de cada bidón para saber cuánto batido sobró en cada uno de ellos.

La carga de ventas finaliza cuando se ingresa un código de batido igual a cero. Para resolver este problema,
se debe hacer un programa que procese todas las ventas del día y calcule cuánto batido queda en cada bidón al
final del mismo.

Al finalizar la carga de ventas, el programa debe imprimir la cantidad de litros que quedó en cada bidón y
cuántos batidos vendió de cada uno.
*/




#include <iostream>
#include "funciones.h"
#include <string>

using namespace std;
#include "bidon.h"
#include "vaso.h"

int main(){
    float *recaudacion;
    int opcion;
    int cantidadBidones;
    bidon *vectorBidones;
    vaso vectorVasos[3];

    vectorVasos[0].setCapacidad(0.15);
    vectorVasos[1].setCapacidad(0.2);
    vectorVasos[2].setCapacidad(0.3);
    vectorVasos[0].setCodigoTamanio(1);
    vectorVasos[1].setCodigoTamanio(2);
    vectorVasos[2].setCodigoTamanio(3);

    cout << "Ingrese cantidad de bidones con las que va a trabajar" << endl;
    cin >> cantidadBidones;

    vectorBidones = new bidon[cantidadBidones];
    recaudacion = new float[cantidadBidones];

    do{
        cout <<"1. DEFINICION DE BIDONES" << endl << "2. LLENAR BIDONES" << endl << "3. NIVEL DE LOS BIDONES" << endl << "4. CARGAR VENTAS" << endl << "5. VACIAR BIDONES" << endl;
        cin >> opcion;

        switch(opcion){
        case 1:
            definicionDeBidones(vectorBidones, cantidadBidones);
            break;
        case 2:
            llenarBidones(vectorBidones, cantidadBidones);
            break;
        case 3:
            mostrarNiveldeBidones(vectorBidones, cantidadBidones);
            break;
        case 4:
            CargaVentas(vectorBidones, vectorVasos, cantidadBidones, recaudacion);
            break;
        case 5:
            vaciarBidones(vectorBidones, cantidadBidones);
            break;
        default:
            break;
            }
    }while(true);

    delete [] vectorBidones;
    delete [] recaudacion;

    return 0;
}
