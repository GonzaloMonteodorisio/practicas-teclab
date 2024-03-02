#include <iostream>
#include <string>
using namespace std;

int main() {
  int i, j, size;
  string licencias[10] = {"LB2362", "VD2565", "DS7856", "GT8569", "SD4572", "WF4004", "TG4565", "BP0456", "KL4580", "DF4587"};
  string aux;

  size = sizeof(licencias) / sizeof(licencias[0]);

  cout << "Size: " << size << endl;


  for (i = 1; i < size ; i++) {
    cout << "licencias: " << i << ": " << "{ ";
    for (j = 1; j < size; j++) {
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

  return 0;
}