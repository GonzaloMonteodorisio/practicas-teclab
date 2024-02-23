#include <iostream>
using namespace std;

int main() {
  int i, cuadrado;
  int es_mayor_a_50 = 0;
  for (i = 1; i <= 10; i++) {
    cuadrado = i * i;
    cout << cuadrado << " ";

    if (cuadrado > 50) {
      es_mayor_a_50++;
    }
  }
  cout << endl;
  cout << "Hay " << es_mayor_a_50 << " cuadrados mayores a 50";

  return 0;
}