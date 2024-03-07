#include <iostream>
#include <string>
using namespace std;

int main() {
  int i, j, size;
  string licencias[10] = {"LB2362", "VD2565", "DS7856", "GT8569", "SD4572", "WF4004", "TG4565", "BP0456", "KL4580", "DF4587"};

  string licenciasOrdenado[10];

  string aux;

  size = sizeof(licencias) / sizeof(licencias[0]);

  cout << "Size: " << size << endl;

  for (i = 0; i < size; i++) {
    if (i == 0) {
      licenciasOrdenado[i] = licencias[i];
    } else if (i == 1) {
      if (licenciasOrdenado[i - 1] > licencias[i]) {
        aux = licenciasOrdenado[i - 1];
        licenciasOrdenado[i - 1] = licencias[i];
        licenciasOrdenado[i] = aux;
      }
    } else {
      for (j = i - 1; j > 0; j--) {
        while (licencias[i] < licenciasOrdenado[j - 1] && licencias[i] > licenciasOrdenado[j]) {
          licenciasOrdenado[j + 1] = licenciasOrdenado[j];
          licenciasOrdenado[j] = licencias[i];
        } 
      }
    }
  }

  for (i = 0; i < size; i++) {
    cout << licenciasOrdenado[i] << endl;
  }

/*
  for (i = 0; i < size ; i++) {
    cout << "licencias: " << i << ": " << "{ ";
    for (j = 0; j < size; j++) {
      if (licencias[j - 1] > licencias[j]) {
        aux = licencias[j - 1];
        licencias[j - 1] = licencias[j];
        licencias[j] = aux;
      }
      cout << "\"" << licencias[j - 1] << "\", ";
      if (j == size -1) {
        cout << "\"" << licencias[j] << "\" }" << endl;
      }
    }
  }
*/

  return 0;
}