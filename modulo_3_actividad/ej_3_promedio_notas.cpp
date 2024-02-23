#include <iostream>
using namespace std;

int main() {
  int cantidad, i;
  float notas[100], acumulador, notaMaxima, promedio;

  acumulador = 0;
  notaMaxima = 0;

  cout << "Ingrese la cantidad de alumnos (máximo 100)" << endl;
  cin >> cantidad;

  for (i = 0; i < cantidad; i++) {
    cout << "Ingrese la nota del alumno " << to_string(i + 1) << endl;
    cin >> notas[i];
    acumulador = acumulador + notas[i];
    if (notas[i] > notaMaxima) {
      notaMaxima = notas[i];
    }
  }

  for (i = 0; i < cantidad; i++) {
    cout << "Nota de alumno " << to_string(i + 1) << ": " << notas[i] << endl;
  }

  promedio = acumulador / (i + 1);
  cout << "El promedio de todas las notas es: " << promedio << endl;

  return 0;
}