/*-------------------------------------------------
Fecha: 31 - Enero - 2024
Catedra: Algoritmos y Programacion
NombredelPrograma:
Lenguaje de Programacion: C++
Programador: Juan Carlos Navas
Cedula: V-28.326.698
Descripcion del Programa: Que rellene un array con los 100 primeros números enteros y los muestre en pantalla.
(coloco aqui el enumciado del ejercicio de la guia)
---------------------------------------------------*/

#include <math.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>

using namespace std;

//======================================================
const int arraySize = 100;
int elArray[arraySize];
//=======================================================
void rellenarPares(int elArray[], int n);
void mostrarArray(int elArray[], int n);
/*=======================================================
// FUNCIONES
//=======================================================*/

//------------------------------------------
void rellenarPares(int elArray[], int n)
{
    for (int i = 0; i < 100; i++)
    {
        elArray[i] = (i + 1) * 2;
    }
}

void mostrarArray(int elArray[], int n)
{
    for (int i = 99; i >= 0; i--)
    {
        cout << elArray[i] << " ";
    }
    cout << endl;
}

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

    rellenarPares(elArray, arraySize);
    mostrarArray(elArray, arraySize);
    return 0;
}