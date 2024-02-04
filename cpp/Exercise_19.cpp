/*-------------------------------------------------
Fecha: 31 - Enero - 2024
Catedra: Algoritmos y Programacion
Nombre del Programa: Contar vocales
Lenguaje de Programacion: C++
Programador: Juan Carlos Navas
Cedula: V-28.326.698
Descripcion del Programa: . Que lea una cadena y diga cuantas vocales hay. 
---------------------------------------------------*/

#include <iostream>

using namespace std;

// Definición de constantes
const string MENSAJE_INICIO = "**********************************";
const string MENSAJE_COMPILACION = " Se compilo sin errores";
const string MENSAJE_FIN = "**********************************";
const string MENSAJE_PEDIR_CADENA = "Introduce una cadena de texto: ";

// Función para pedir al usuario que ingrese una cadena de texto
string pedirCadena() {
  string cadena;
  cout << MENSAJE_PEDIR_CADENA;
  cin >> cadena;
  return cadena;
}

// Función para contar la cantidad de vocales en una cadena
int contarVocales(string cadena) {
  int contador = 0;
  for (char caracter : cadena) {
    // Convertir el caracter a minúscula
    char letraMinuscula = tolower(caracter);

    // Si el caracter es una vocal, aumentar el contador
    if (letraMinuscula == 'a' || letraMinuscula == 'e' || letraMinuscula == 'i' || letraMinuscula == 'o' || letraMinuscula == 'u') {
      contador++;
    }
  }
  return contador;
}

// Función para mostrar el resultado
void mostrarResultado(int cantidadVocales) {
  cout << "La cadena tiene " << cantidadVocales << " vocales." << endl;
}

// Función principal
int main() {
  // Mostrar mensaje de inicio
  cout << MENSAJE_INICIO << endl << endl;
  cout << MENSAJE_COMPILACION << endl << endl;
  cout << MENSAJE_FIN << endl;

  // Pausar la pantalla y limpiar la consola
  system("PAUSE");
  system("cls");

  // Pedir la cadena al usuario
  string cadena = pedirCadena();

  // Contar las vocales
  int cantidadVocales = contarVocales(cadena);

  // Mostrar el resultado
  mostrarResultado(cantidadVocales);

  return 0;
}
