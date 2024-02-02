#include <iostream>
using namespace std;

int main() {
  // Declarar un array de tamaño 10
  int array[10];

  // Declarar variables para almacenar la suma, la resta, la multiplicación y la división
  int suma = 0;
  int resta = 0;
  int multiplicacion = 1;
  double division = 1;

  // Leer 10 números por teclado y almacenarlos en el array
  cout << "Introduce 10 números:" << endl;
  for (int i = 0; i < 10; i++) {
    cin >> array[i];
    // Sumar los elementos del array
    suma += array[i];
    // Restar los elementos del array
    if (i == 0) {
      // El primer elemento se asigna a la resta
      resta = array[i];
    } else {
      // Los demás elementos se restan a la resta
      resta -= array[i];
    }
    // Multiplicar los elementos del array
    multiplicacion *= array[i];
    // Dividir los elementos del array
    if (i == 0) {
      // El primer elemento se asigna a la división
      division = array[i];
    } else {
      // Los demás elementos se dividen a la división
      division /= array[i];
    }
  }

  // Mostrar los resultados en pantalla
  cout << "La suma de todos los números es: " << suma << endl;
  cout << "La resta de todos los números es: " << resta << endl;
  cout << "La multiplicación de todos los números es: " << multiplicacion << endl;
  cout << "La división de todos los números es: " << division << endl;

  return 0;
}
