#include <iostream>
#include <cstring>
using namespace std;

bool esPalindromo(char palabra[100]) {
  int longitud = strlen(palabra);
  char nuevaPalabra[100];
  int i;
  bool palabraEsPalindromo = true;
  for (i = 0; i < longitud; i++) {
    nuevaPalabra[longitud - 1 - i] = palabra[i];
  }

  for (i = 0; i < longitud; i++) {
    if (tolower(palabra[i]) != tolower(nuevaPalabra[i])) {
      palabraEsPalindromo = false;
    }
  }
  return palabraEsPalindromo;
}

int main() {
  char miPalabra[100];

  cout << "Ingrese una palabra (100 caracteres máximo)" << endl;
  cin >> miPalabra;

  if (esPalindromo(miPalabra)) {
    cout << "Es palíndromo" << endl;
  } else {
    cout << "No es palíndromo" << endl;
  }

  return 0;
}