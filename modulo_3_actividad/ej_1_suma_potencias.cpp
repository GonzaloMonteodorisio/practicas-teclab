#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int numero, potencia, resultado;
  char seguir;

  do {
    cout << "Vamos a calcular la potencia de un número entero!" << endl;
    cout << "Ingrese un número entero:" << endl;
    cin >> numero;

    cout << "Ingrese la potencia:" << endl;
    cin >> potencia;

    resultado = pow(numero, potencia);

    cout << numero << " elevado a la " << potencia << " es: " << resultado << endl;

    cout << "Desea introducir otro número? \nIngrese 's' para si o 'n' para no" << endl;
    cin >> seguir;
  } while (seguir == 's');
}