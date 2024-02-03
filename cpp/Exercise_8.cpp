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
int elArraySort[arraySize];
//=======================================================

void rellenarArray(int elArray[]);
void multiplyArray(int elArray[], int elArrayMultiply[]);
void mostrarArray(int elArray[], int elArrayMultiply[], int elArraySort[]);
void sortArray(int elArrayMultiply[], int elArraySort[]);

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

    sortArray(elArrayMultiply, elArraySort);

    mostrarArray(elArray, elArrayMultiply, elArraySort);

    return 0;
}
/*=======================================================
// FUNCIONES
//=======================================================*/
void rellenarArray(int elArray[])
{
    cout << "Introduce 5 números por teclado:\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> elArray[i];
    }
}

void multiplyArray(int elArray[], int elArrayMultiply[])
{
    for (int i = 0; i < 5; i++)
    {
        elArrayMultiply[i] = elArray[i] * 10;
    }
}

void sortArray(int elArrayMultiply[], int elArraySort[])
{

    for (int i = 0; i < 5; i++)
    {
        int min = i;
        for (int j = i + 1; j < 5; j++)
        {
            if (elArrayMultiply[j] < elArrayMultiply[min])
            {
                min = j;
            }
        }
        int aux = elArrayMultiply[i];
        elArrayMultiply[i] = elArrayMultiply[min];
        elArrayMultiply[min] = aux;
        elArraySort[i] = elArrayMultiply[i];
    }
}
void mostrarArray(int elArray[], int elArrayMultiply[], int elArraySort[])
{
    cout << "Los tres arrays son:\n";
    cout << "Array original:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << elArray[i] << " ";
    }
    cout << "\n";
    cout << "Array multiplicado por 10:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << elArrayMultiply[i] << " ";
    }
    cout << "\n";
    cout << "Array ordenado de menor a mayor:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << elArraySort[i] << " ";
    }
    cout << "\n";
}
//------------------------------------------
