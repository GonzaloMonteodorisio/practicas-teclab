#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i, j, numFilas, numColumnas;
    numFilas = 5; // cantidad de pacientes
    numColumnas = 2; // Dos datos por paciente: nombre y apellido
    string pacientes[numFilas][numColumnas];
    string auxApellido, auxNombre;

    // Solicitar información de los pacientes
    for (i = 0; i < numFilas; i++) {
        cout << "Ingrese el nombre del paciente " << to_string(i + 1) << ":" << endl;
        getline(cin, pacientes[i][0]); // Nombres en la primera columna
        cout << "Ingrese el apellido paterno del paciente " << to_string(i + 1) << ":" << endl;
        getline(cin, pacientes[i][1]); // Apellidos en la segunda columna
    }

    cout << "\nMatriz original: " << endl;
    for (i = 0; i < numFilas; i++) {
        cout << "Paciente " << to_string(i + 1) << ": " << pacientes[i][0] << " " << pacientes[i][1] << endl;
    }

    // Ordenar la matriz en forma ascendente según apellido paterno
    for (i = 0; i < numFilas - 1; i++) {
        for (j = 0; j < numFilas - i - 1; j++) {
            if (pacientes[j][1] > pacientes[j + 1][1]) { // Comparamos los apellidos
                // Intercambiar apellidos
                auxApellido = pacientes[j][1];
                pacientes[j][1] = pacientes[j + 1][1];
                pacientes[j + 1][1] = auxApellido;

                // Intercambiar nombres
                auxNombre = pacientes[j][0];
                pacientes[j][0] = pacientes[j + 1][0];
                pacientes[j + 1][0] = auxNombre;
            }
        }
    }

    // Mostrar la matriz ordenada
    cout << "\nMatriz ordenada en orden ascendente de apellidos paternos: " << endl;
    for (i = 0; i < numFilas; i++) {
        cout << "Paciente " << to_string(i + 1) << ": " << pacientes[i][0] << " " << pacientes[i][1] << endl;
    }

    return 0;
}
