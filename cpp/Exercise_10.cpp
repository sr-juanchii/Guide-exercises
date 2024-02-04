/*-------------------------------------------------
Fecha: 31 - Enero - 2024
Catedra: Algoritmos y Programacion
NombredelPrograma:
Lenguaje de Programacion: C++
Programador: Juan Carlos Navas
Cedula: V-28.326.698
Descripcion del Programa: . Que lea 10 números por teclado, los almacene en un array y muestre la media aritmética (media 
aritmética es igual a la sumatoria de los valores en la cantidad de valores).
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

int laSuma = 0;
//=======================================================
void rellenarArray(int elArray[], int arraySize);
double calcMedia(int laSuma, int arraySize);                     // Esta función debe tener dos parámetros de tipo int, no double ni int[]
void mostrarArray(int elArray[], int arraySize, double laMedia); // Esta función debe recibir la media como parámetro

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
    double laMedia = calcMedia(laSuma, arraySize); // Esta variable debe recibir el valor que devuelve la función calcMedia
    mostrarArray(elArray, arraySize, laMedia);     // Esta función debe recibir la media como argumento
    return 0;
}
/*=======================================================
// FUNCIONES
//=======================================================*/

//------------------------------------------
void rellenarArray(int elArray[], int arraySize)
{
    cout << "Introduce 10 números por teclado:\n";
    for (int i = 0; i < arraySize; i++)
    {
        cin >> elArray[i];
        laSuma += elArray[i];
    }
}

double calcMedia(int laSuma, int arraySize) // Esta función debe tener dos parámetros de tipo int, no double ni int[]
{
    double laMedia;                       // declare the variable
    laMedia = (double)laSuma / arraySize; // calculate the media
    return laMedia;                       // return the result
}

void mostrarArray(int elArray[], int arraySize, double laMedia) // Esta función debe recibir la media como parámetro
{
    cout << "El array de los 10 números es:\n";
    for (int i = 0; i < arraySize; i++)
    {
        cout << elArray[i] << " "; // Muestra el valor del array
    }
    cout << "\n";
    cout << "La media aritmética de los 10 números es: " << laMedia << "\n"; // Muestra la media aritmética
}
