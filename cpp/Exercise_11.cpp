
/*-------------------------------------------------
Fecha: 31 - Enero - 2024
Catedra: Algoritmos y Programacion
NombredelPrograma:
Lenguaje de Programacion: C++
Programador: Juan Carlos Navas
Cedula: V-28.326.698
Descripcion del Programa:  Que mediante un array almacene números tanto positivos como negativos y los muestre 
ordenados. 
---------------------------------------------------*/

#include <iostream>
#include <vector>
#include <algorithm>

//======================================================
//=======================================================
void leerNumeros(std::vector<int> &numeros);
void ordenarNumeros(std::vector<int> &numeros);
void mostrarNumeros(const std::vector<int> &numeros);

/*=======================================================
// FUNCION PRINCIPAL
//======================================================*/
int main()
{

    std::vector<int> numeros;

    // Llamamos a la función para leer los números del usuario
    leerNumeros(numeros);

    // Llamamos a la función para ordenar los números
    ordenarNumeros(numeros);

    // Llamamos a la función para mostrar los números
    mostrarNumeros(numeros);

    return 0;
}

/*=======================================================
// FUNCIONES
//=======================================================*/

//------------------------------------------

// La función para leer los números del usuario
void leerNumeros(std::vector<int>& numeros)
{
    // Declaramos una variable para guardar el número leído
    int numero;

    // Pedimos al usuario que introduzca los números que quiera
    std::cout << "Introduce los numeros que quieras (0 para terminar): ";

    // Leemos el primer número
    std::cin >> numero;

    // Mientras el número no sea cero, lo añadimos al vector y leemos otro
    while (numero != 0)
    {
        // Añadimos el número al final del vector
        numeros.push_back(numero);

        // Leemos otro número
        std::cin >> numero;
    }
}

// La función para ordenar los números
void ordenarNumeros(std::vector<int>& numeros)
{
    // Usamos la función sort de la librería algorithm para ordenar el vector
    // Le pasamos como argumentos el inicio y el final del vector
    std::sort(numeros.begin(), numeros.end());
}

// La función para mostrar los números
void mostrarNumeros(const std::vector<int>& numeros)
{
    // Mostramos un mensaje indicando el tamaño del vector
    std::cout << "El vector tiene " << numeros.size() << " numeros.\n";

    // Mostramos un mensaje indicando el orden de los números
    std::cout << "Los numeros ordenados de menor a mayor son:\n";

    // Recorremos el vector con un bucle for
    for (int i = 0; i < numeros.size(); i++)
    {
        // Mostramos el número en la posición i del vector
        std::cout << numeros[i] << " ";
    }

    // Saltamos de línea al final
    std::cout << "\n";
}
