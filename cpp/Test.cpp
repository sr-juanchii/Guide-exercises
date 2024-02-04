#include <iostream>

using namespace std;

int main() {
  string cadena;
  int contadorMayusculas = 0;

  // Leer la cadena del usuario
  cout << "Introduce una cadena: ";
  cin >> cadena;

  // Recorrer la cadena caracter a caracter
  for (char caracter : cadena) {
    // Si el caracter es una letra mayúscula, aumentar el contador
    if (isupper(caracter)) {
      contadorMayusculas++;
    }
  }

  // Mostrar el resultado
  cout << "La cadena tiene " << contadorMayusculas << " letras mayusculas." << endl;

  return 0;
}
