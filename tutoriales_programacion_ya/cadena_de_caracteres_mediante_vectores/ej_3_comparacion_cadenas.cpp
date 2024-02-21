#include <iostream>
#include <cstring>
using namespace std;

int main() {
  char cadena1[50];
  char cadena2[50];
  int comparacion;

  cout << "Ingrese la primer cadena de 50 caracteres como máximo: " << endl;
  cin.getline(cadena1, 50);

  cout << "Ingrese la segunda cadena de 50 caracteres como máximo: " << endl;
  cin.getline(cadena2, 50);

  comparacion = strcmp(cadena1, cadena2);

  cout << "Comparación: " << comparacion << endl;

  if (comparacion == 0) {
    cout << "Las cadenas ingresadas son iguales" << endl;
  } else {
    if (comparacion > 0) {
      cout << "La primer cadena ingresada es mayor alfabeticamente" << endl;
    } else {
      cout << "La segunda cadena ingresada es mayor alfabeticamente" << endl;
    }
  }
}