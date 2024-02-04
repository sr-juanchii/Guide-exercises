/*-------------------------------------------------
Fecha: 31 - Enero - 2024
Catedra: Algoritmos y Programacion
NombredelPrograma:
Lenguaje de Programacion: C++
Programador: Juan Carlos Navas
Cedula: V-28.326.698
Descripcion del Programa:  Que lea una cadena y diga cuantas mayúsculas hay. 
---------------------------------------------------*/
#include <math.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <algorithm>

using namespace std;

//======================================================
string chain;
int mayusCount = 0;
//=======================================================

void inputChain(string& chain) {
    // Pide al usuario que ingrese una cadena de texto y la guarda en la referencia de cadena
    cout << "Introduce una cadena de texto: ";
    cin >> chain;
}

void mayusFinde(string chain, int& mayusCount) {
    for (char caracter : chain) {
        // Si el caracter es una letra mayúscula, aumentar el contador
        if (isupper(caracter)) {
            mayusCount++;
        }
    }
}

void mostrarMayus(int mayusCount) {
    cout << "La cadena tiene " << mayusCount << " letras mayusculas." << endl;
}

//=======================================================
// FUNCION PRINCIPAL
//======================================================
int main() {

    cout << "**********************************" << endl << endl;
    cout << "  Se compilo sin errores" << endl << endl;
    cout << "**********************************\n";

    system("PAUSE");
    system("cls");

    inputChain(chain);
    mayusFinde(chain, mayusCount);
    mostrarMayus(mayusCount);

    return 0;
}