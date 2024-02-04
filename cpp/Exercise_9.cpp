/*-------------------------------------------------
Fecha: 31 - Enero - 2024
Catedra: Algoritmos y Programacion
NombredelPrograma:
Lenguaje de Programacion: C++
Programador: Juan Carlos Navas
Cedula: V-28.326.698
Descripcion del Programa: . Que rellene un array con los 100 primeros números inpares y muestre su suma. 
---------------------------------------------------*/

#include <math.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <algorithm>

using namespace std;

//======================================================
const int arraySize = 100;
int elArray[arraySize];
int sumaTotal = 0;
//=======================================================
void rellenarInpares(int elArray[], int arraySize);
void mostrarArray(int elArray[], int arraySize);
/*=======================================================
// FUNCION PRINCIPAL
//======================================================*/
int main()
{

    cout << "**********************************" << endl
         << endl;
    cout << "  Se compilo sin errores" << endl
         << endl;
    cout << "**********************************\n";

    system("PAUSE");
    system("cls");

    rellenarInpares(elArray, arraySize);
    mostrarArray(elArray, arraySize);
    return 0;
}
/*=======================================================
// FUNCIONES
//=======================================================*/

//------------------------------------------
void rellenarInpares(int elArray[], int arraySize)
{
    for (int i = 0; i < arraySize; i++)
    {
        elArray[i] = 2 * i + 1;
        
        //SUMA DE TODOS LOS NUMERO IMPARES
        sumaTotal += elArray[i];
    }
}
void mostrarArray(int elArray[], int arraySize)
{
    cout << "Los " << arraySize << " primeros numeros impares son: " << endl;
    for (int i = 0; i < arraySize; i++)
    {
        cout << elArray[i] << " ";
    }
    cout << endl;

    system("PAUSE");

    //MOSTRAR LA SUMA TOTAL DE LOS NUMEROS
    cout << "La sumatoria de los " << arraySize << " primeros numeros impares es:" << endl;
    cout << sumaTotal;
}
