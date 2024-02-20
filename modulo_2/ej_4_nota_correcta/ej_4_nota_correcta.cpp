#include <iostream>
using namespace std;

int main() {
  float nota;

  cout << "Ingrese la nota del exámen: " << endl;
  cin >> nota;

  while (nota < 1 || nota > 10) {
    cout << "Ingrese la nota del exámen: " << endl;
    cin >> nota;
    if (nota < 1 && nota > 10) {
      cout << "nota incorrecta" << endl;
    }
  }

  if (nota >= 4) {
    cout << "Aprobado" << endl;
  } else {
    cout << "Reprobado" << endl;
  }

  return 0;
}