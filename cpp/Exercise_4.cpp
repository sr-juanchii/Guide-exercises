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
#include <cstdlib>
#include <algorithm>

using namespace std;

//======================================================
const int arraySize = 10;
int elArray[arraySize];
//=======================================================
void rellenarRandom(int elArray[], int n);
void mostrarArray(int elArray[], int n);
void sortRelleno(int elArray[], int n);

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
void rellenarRandom(int elArray[], int n)
{
    for (int i = 0; i < n; i++)
    {
        elArray[i] = rand() % 100 + 1;
    }
}

void sortRelleno(int elArray[], int n)
{

    // sort(elArray, elArray + n); // ORDENA NUMEROS DE MENOR A MAYOR

    sort(elArray, elArray + n, greater<int>()); // ORDENA NUMEROS DE MAYOR A MENOR
}

void mostrarArray(int elArray[], int n)
{
    cout << "Los " << n << " números aleatorios son:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << elArray[i] << " ";
    }
    cout << endl;
}
