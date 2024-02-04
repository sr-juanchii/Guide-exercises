/*-------------------------------------------------
Fecha: 31 - Enero - 2024
Catedra: Algoritmos y Programacion
NombredelPrograma:
Lenguaje de Programacion: C++
Programador: Juan Carlos Navas
Cedula: V-28.326.698
Descripcion del Programa: . Que rellene un array con 20 números y luego permita buscar un número en concreto. 
---------------------------------------------------*/

#include <math.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <algorithm>

using namespace std;

//======================================================
const int arraySize = 20;
int numeros[arraySize];
int numeroABuscar;
bool encontrado = false;
int posicionEncontrada = -1;
//=======================================================
void rellenarArray(int elArray[], int arraySize);
void findNumber(int elArray[], int arraySize);
void buscandoNumber(int elArray[], int arraySize);
void mostrarArray(int elArray[], int buscarNumber);
/*=======================================================
// FUNCION PRINCIPAL
//======================================================*/
int main()
{
    cout << "**********************************" << endl
         << endl;
    cout << " Se compilo sin errores" << endl
         << endl;
    cout << "**********************************\n";

    system("PAUSE");
    system("cls");

    rellenarArray(numeros, arraySize);
    findNumber(numeros, arraySize);
    buscandoNumber(numeros, arraySize);
    mostrarArray(numeros, numeroABuscar);

    return 0;
}
/*=======================================================
// FUNCIONES
//=======================================================*/

//------------------------------------------
void rellenarArray(int numeros[], int arraySize)
{
    for (int i = 0; i < arraySize; i++)
    {
        cout << "Introduzca el numero " << i + 1 << ": ";
        cin >> numeros[i];
    }
}

void findNumber(int numeros[], int arraySize)
{
    cout << "\nIntroduzca el numero que desea buscar: ";
    cin >> numeroABuscar;
}

void buscandoNumber(int numeros[], int arraySize)
{
    // Búsqueda secuencial
    for (int i = 0; i < arraySize; i++)
    {
        if (numeros[i] == numeroABuscar)
        {
            encontrado = true;
            posicionEncontrada = i;
            break;
        }
    }
}

void mostrarArray(int numeros[], int numeroABuscar)
{
    if (encontrado)
    {
        cout << "El numero " << numeroABuscar << " se encuentra en la posicion " << posicionEncontrada + 1 << endl;
    }
    else
    {
        cout << "El numero " << numeroABuscar << " no se encuentra en el array" << endl;
    }
}
