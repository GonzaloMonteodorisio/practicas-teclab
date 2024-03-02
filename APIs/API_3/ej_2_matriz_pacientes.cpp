#include <iostream>
#include <string>
using namespace std;

int main()
{
  int i, j, numFilas, numColumnas;
  numFilas = 2;
  numColumnas = 5;
  string pacientes[numFilas][numColumnas];
  string auxApellido, auxNombre;

  for (i = 0; i < numColumnas; i++) {
    cout << "Ingrese el nombre del paciente " << to_string(i + 1) << ":" << endl;
    getline(cin, pacientes[0][i]);
    cout << "Ingrese el apellido paterno del paciente " << to_string(i + 1) << ":" << endl;
    getline(cin, pacientes[1][i]);
  }
  cout << "\nMatriz original: " << endl;
  for (i = 0; i < numColumnas; i++) {
    cout << "Paciente " << to_string(i + 1) << ": " << pacientes[0][i] << " " << pacientes[1][i] << endl;
  }

  // Ordenar matriz en forma ascendente según apellido paterno
  for (i = 1; i < numColumnas; i++) {
    for (j = 1; j < numColumnas; j++) {
      if (pacientes[1][j - 1] > pacientes[1][j]) {
        auxApellido = pacientes[1][j - 1];
        pacientes[1][j - 1] = pacientes[1][j];
        pacientes[1][j] = auxApellido;

        auxNombre = pacientes[0][j - 1];
        pacientes[0][j - 1] = pacientes[0][j];
        pacientes[0][j] = auxNombre;
      }
    }
  }
  cout << "\nMatriz ordenada en orden ascendente de apellidos paternos: " << endl;
  for (i = 0; i < numColumnas; i++) {
    cout << "Paciente " << to_string(i + 1) << ": " << pacientes[0][i] << " " << pacientes[1][i] << endl;
  }

  return 0;
}