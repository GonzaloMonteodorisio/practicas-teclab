#include <iostream>
using namespace std;

int main() {
  int listaNumeros[5] = {2, 4, -6, -10, 0};

  for (int numero : listaNumeros) {
    cout << numero << endl;

    if (numero > 0) {
      cout << "El número es positivo" << endl;
    } else if (numero < 0) {
      cout << "El número es negativo" << endl;
    } else {
      cout << "El número es 0" << endl;     
    }
  }
}