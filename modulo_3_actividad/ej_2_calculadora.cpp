#include <iostream>
using namespace std;

float sumar(float num1, float num2) {
  return num1 + num2;
}

float restar(float num1, float num2) {
  return num1 - num2;
}

float multiplicar(float num1, float num2) {
  return num1 * num2;
}

float dividir(float num1, float num2) {
  return num1 / num2;
}

int main() {
  int opcion;
  float numero1, numero2, resultado;

  do {
      do {
        cout << "Elija la operación que desea realizar:" << endl;
        cout << "1. Suma" << endl;
        cout << "2. Resta" << endl;
        cout << "3. Multiplicación" << endl;
        cout << "4. División" << endl;
        cout << "5. Salir" << endl;

        cin >> opcion;
      } while (opcion < 1 || opcion > 5);

      switch (opcion) {
        case 1: 
          cout << "Ingrese el primer número para la suma:" << endl;
          cin >> numero1;
          cout << "Ingrese el segundo número para la suma:" << endl;
          cin >> numero2;
          resultado = sumar(numero1, numero2);
          cout << numero1 << " + " << numero2 << " = " << resultado << endl;
          break; 

        case 2:
          cout << "Ingrese el primer número para la resta:" << endl;
          cin >> numero1;
          cout << "Ingrese el segundo número para la resta:" << endl;
          cin >> numero2;
          resultado = restar(numero1, numero2);
          cout << numero1 << " - " << numero2 << " = " << resultado << endl;
          break; 

        case 3:
          cout << "Ingrese el primer número para la multiplicación:" << endl;
          cin >> numero1;
          cout << "Ingrese el segundo número para la multiplicaión:" << endl;
          cin >> numero2;
          resultado = multiplicar(numero1, numero2);
          cout << numero1 << " * " << numero2 << " = " << resultado << endl;
          break; 

        case 4:
          cout << "Ingrese el primer número para la división:" << endl;
          cin >> numero1;
          do {
            cout << "Ingrese el segundo número para la división (no puede ser 0):" << endl;
            cin >> numero2;
          } while (numero2 == 0);
          resultado = dividir(numero1, numero2);
          cout << numero1 << " / " << numero2 << " = " << resultado << endl;
          break;

        case 5:
          cout << "Usted salió" << endl;
          break;

        default:
          cout << "No ingresó una opción adecuada" << endl;
          break;
      }
  } while (opcion != 5);
}

