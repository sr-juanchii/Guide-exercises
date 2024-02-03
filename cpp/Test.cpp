#include <iostream>
#include <vector>
// Declaración de variables globales
int vectorSize = 5;
int *elVector(vectorSize);
int *elVectorsito(vectorSize);
int sumaAlgebraica;
float promedioVector1;
float promedioVector2;
float promedioGeneral;

// Prototipos de funciones
void rellenarVector(int *vector, int tamanio);
float calcularPromedio(int *vector, int tamanio);
void calcularSumaAlgebraica();
void mostrarResultados();

int main()
{
  // Lectura del primer vector
  rellenarVector(elVector, vectorSize);

  // Lectura del segundo vector
  rellenarVector(elVectorsito, vectorSize);

  // Cálculo de la suma algebraica
  calcularSumaAlgebraica();

  // Cálculo del promedio del primer vector
  promedioVector1 = calcularPromedio(elVector, vectorSize);

  // Cálculo del promedio del segundo vector
  promedioVector2 = calcularPromedio(elVectorsito, vectorSize);

  // Cálculo del promedio general
  promedioGeneral = (promedioVector1 + promedioVector2) / 2;

  // Mostrar resultados
  mostrarResultados();

  // Liberar memoria de los vectores
  delete[] elVector;
  delete[] elVectorsito;

  return 0;
}

// Función para leer un vector
void leerVector(int *vector, int tamanio)
{
  for (int i = 0; i < tamanio; i++)
  {
    std::cout << "Ingrese el valor " << i + 1 << " del vector: ";
    std::cin >> vector[i];
  }
}

// Función para calcular el promedio de un vector
float calcularPromedio(int *vector, int tamanio)
{
  float suma = 0;
  for (int i = 0; i < tamanio; i++)
  {
    suma += vector[i];
  }
  return suma;
}