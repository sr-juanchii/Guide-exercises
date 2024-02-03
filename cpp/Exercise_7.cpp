/*-------------------------------------------------
Fecha: 31 - Enero - 2024
Catedra: Algoritmos y Programacion
NombredelPrograma:
Lenguaje de Programacion: C++
Programador: Juan Carlos Navas
Cedula: V-28.326.698
Descripcion del Programa:
---------------------------------------------------*/

#include <math.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <algorithm>

using namespace std;

//======================================================
const int arraySize = 5;
int elArray[arraySize];
int elArrayMultiply[arraySize];
//=======================================================

void rellenarArray(int elArray[]);
void multiplyArray(int elArray[], int elArrayMultiply[]);
void mostrarArray(int elArray[], int elArrayMultiply[]);

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

    rellenarArray(elArray);

    multiplyArray(elArray, elArrayMultiply);

    mostrarArray(elArray, elArrayMultiply);

    return 0;
}
/*=======================================================
// FUNCIONES
//=======================================================*/
void rellenarArray(int elArray[])
{
    cout << "Introduce 5 numeros por teclado:\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> elArray[i];
    }
}

void multiplyArray(int elArray[], int elArrayMultiply[])
{
    for (int i = 0; i < 5; i++)
    {
        elArrayMultiply[i] = elArray[i] * 2;
    }
}

void mostrarArray(int elArray[], int elArrayMultiply[])
{
    cout << "Los valores originales y los valores del array son:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << elArray[i] << " -> " << elArrayMultiply[i] << "\n";
    }
}
//------------------------------------------
