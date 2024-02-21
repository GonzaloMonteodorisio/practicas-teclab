#include <iostream>
using namespace std;

int main() {
  float num1, num2, num3, mayor, menor;

  cout << "Ingrese el primer número: " << endl;
  cin >> num1;

  cout << "Ingrese el segundo número: " << endl;
  cin >> num2;

  cout << "Ingrese el tercer número: " << endl;
  cin >> num3;

  if (num1 > num2 && num1 > num3) {
    mayor = num1;
    if (num2 > num3) {
      menor = num3;
    } else {
      menor = num2;
    }
  } else if (num2 > num1 && num2 > num3) {
    mayor = num2;
    if (num1 > num3) {
      menor = num3;
    } else {
      menor = num1;
    }
  } else {
    mayor = num3;
    if (num2 > num1) {
      menor = num1;
    } else {
      menor = num2;
    }    
  }
  
  cout << "El número mayor es: " << mayor << endl;
  cout << "El número menor es: " << menor << endl;

  return 0;
}