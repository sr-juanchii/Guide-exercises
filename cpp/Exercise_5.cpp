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
const int arraySize = 10;
double elArray[arraySize];
//=======================================================
void rellenarArray(double[], int);

double adicion(double[], int);
double sustraccion(double[], int);
double multiplicacion(double[], int);
double division(double[], int);

void mostrarResultados(double, double, double, double);

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

    double A = adicion(elArray, arraySize);
    double S = sustraccion(elArray, arraySize);
    double M = multiplicacion(elArray, arraySize);
    double D = division(elArray, arraySize);

    mostrarResultados(A, S, M, D);

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
    if (D == 0) {
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
    cout << "La suma de los numeros es: " << A << "\n";
    cout << "La resta de los numeros es: " << S << "\n";
    cout << "La multiplicacion de los numeros es: " << M << "\n";
    cout << "La division de los numeros es: " << D << "\n";
}