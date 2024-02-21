#include <iostream>
using namespace std;

int main() {
  char nombreCompleto[50];

  cout << "Ingrese su nombre y apellido separados por un espacio" << endl;

  cin.getline(nombreCompleto, 50);

  cout << "El nombre ingresado es: " << endl;
  cout << nombreCompleto << endl;
  
  return 0;
}
