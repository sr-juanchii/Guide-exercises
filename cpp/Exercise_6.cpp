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
double elArray[arraySize];
double elArraysito[arraySize];
//=======================================================
void rellenarArray(double[], int);

double adicionArray(double[], int);
double promedio(double[], int);
double adicionAlgebraica(double[], int);

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

    cout << "Introduce " << arraySize << " numeros para el primer array:\n";
    rellenarArray(elArray, arraySize);

    cout << "Introduce " << arraySize << " numeros para el segundo array:\n";
    rellenarArray(elArraysito, arraySize);

    double adicionFirst = adicionArray(elArray, arraySize);
    double adicionSecond = adicionArray(elArraysito, arraySize);

    double promedioFirst = promedio(elArray, arraySize);
    double promedioSecond = promedio(elArraysito, arraySize);

    double promedioTotal = promedio(elArray, arraySize) + promedio(elArraysito, arraySize);

    double adiccionAlg = adicionAlgebraica(elArray, elArraysito, arraySize);

    return 0;
}
/*=======================================================
// FUNCIONES
//=======================================================*/

//------------------------------------------
void rellenarArray(double elArray[], int n)
{
    cout << "Introduce " << n << " numeros:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> elArray[i];
    }
}
double adicion(double elArray[], int n)
{
    double A = 0;
    for (int i = 0; i < n; i++)
    {
        A += elArray[i];
    }
    return A;
}
double sustraccion(double elArray[], int n)
{
    double S = elArray[0];
    for (int i = 1; i < n; i++)
    {
        S -= elArray[i];
    }
    return S;
}
double multiplicacion(double elArray[], int n)
{
    double M = 1;
    for (int i = 0; i < n; i++)
    {
        M *= elArray[i];
    }
    return M;
}
double division(double elArray[], int n)
{
    double D = elArray[0];
    if (D == 0)
    {
        cout << "No se puede dividir por cero\n";
        return NAN; // or -1
    }
    for (int i = 1; i < n; i++)
    {
        if (elArray[i] != 0)
            D /= elArray[i];
        else
        {
            cout << "No se puede dividir por cero\n";
            D = NAN; // or -1
            break;
        }
    }
    return D;
}

void mostrarResultados(double A, double S, double M, double D)
{
    cout << "La suma del primer array es: " << suma1 << "\n";
    cout << "La suma del segundo array es: " << suma2 << "\n";
    cout << "El promedio del primer array es: " << promedio1 << "\n";
    cout << "El promedio del segundo array es: " << promedio2 << "\n";
    cout << "El promedio de los dos arrays es: " << promedio_total << "\n";
    cout << "La suma algebraica de los dos arrays es: " << suma_alg << "\n";
}