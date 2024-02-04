/*-------------------------------------------------
Fecha: 31 - Enero - 2024
Catedra: Algoritmos y Programacion
NombredelPrograma:
Lenguaje de Programacion: C++
Programador: Juan Carlos Navas
Cedula: V-28.326.698
Descripcion del Programa: Que rellene un array con los 100 primeros números enteros y los muestre en pantalla.
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
void rellenarArray(int elArray[], int n);
void mostrarArray(int elArray[], int n);
/*=======================================================
// FUNCIONES
//=======================================================*/

void rellenarArray(int elArray[], int n)
{
    for (int i = 0; i < n; i++)
    {
        elArray[i] = i + 1;
    }
}

void mostrarArray(int elArray[], int n)
{
    cout << "Los primeros 100 numeros enteros:" << endl;
    for (int i = 0; i < n; i++)
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

    rellenarArray(elArray, arraySize);
    mostrarArray(elArray, arraySize);
    return 0;
}