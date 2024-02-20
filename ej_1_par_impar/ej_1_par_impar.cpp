#include <iostream>
using namespace std;

int main() {
  int number;
  cout << "Ingrese un número entero: " << endl;
  cin >> number;

  if (number % 2 == 0) {
    cout << "Es par" << endl;
  } else {
    cout << "Es impar" << endl;
  }
  return 0;
}