/*-------------------------------------------------
Fecha: 31 - Enero - 2024
Catedra: Algoritmos y Programacion
NombredelPrograma:
Lenguaje de Programacion: C++
Programador: Juan Carlos Navas
Cedula: V-28.326.698
Descripcion del Programa: Que rellene un array con 10 números aleatorios y los muestre en pantalla en orden ascendente.
---------------------------------------------------*/

#include <math.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <algorithm>

using namespace std;

//======================================================
const int arraySize = 10;
int elArray[arraySize];
//=======================================================
void rellenarRandom(int elArray[], int arraySize);
void mostrarArray(int elArray[], int arraySize);
void sortRelleno(int elArray[], int arraySize);

/*=======================================================
// FUNCION PRINCIPAL
//======================================================*/
int main()
{
    srand(time(NULL));

    cout << "**********************************" << endl
         << endl;
    cout << "  Se compilo sin errores" << endl
         << endl;
    cout << "**********************************\n";

    system("PAUSE");
    system("cls");

    rellenarRandom(elArray, arraySize);
    sortRelleno(elArray, arraySize);
    mostrarArray(elArray, arraySize);
    return 0;
}
/*=======================================================
// FUNCIONES
//=======================================================*/

//------------------------------------------
void rellenarRandom(int elArray[], int arraySize)
{
    for (int i = 0; i < arraySize; i++)
    {
        elArray[i] = rand() % 100 + 1;
    }
}

void sortRelleno(int elArray[], int arraySize)
{

    sort(elArray, elArray + arraySize); // ORDENA NUMEROS DE MENOR A MAYOR

    // sort(elArray, elArray + n, greater<int>());  //ORDENA NUMEROS DE MAYOR A MENOR
}

void mostrarArray(int elArray[], int arraySize)
{
    cout << "Los " << arraySize << " números aleatorios son:" << endl;
    for (int i = 0; i < arraySize; i++)
    {
        cout << elArray[i] << " ";
    }
    cout << endl;
}
