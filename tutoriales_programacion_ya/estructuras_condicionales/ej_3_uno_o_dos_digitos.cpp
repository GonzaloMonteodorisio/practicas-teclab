#include <iostream>
#include <string>
using namespace std;

int main() {
  int numero, digitos, i, numeroLength;
  string numeroString;

  digitos = 0;

  cout << "Ingrese un número entero positivo de 1 o 2 dígitos: " << endl;
  cin >> numero;

  numeroString = to_string(numero);
  numeroLength = numeroString.length();

  for (i = 0; i < numeroLength; i++) {
    digitos++;
  }

    cout << "El número ingresado tiene " << digitos << " dígitos" << endl;
}