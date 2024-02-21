/*
  Según las Leyes de Morgan:
  - La negación de la disyunción es igual a la conjunción de las negaciones. 
  "no (A y B)" es lo mismo que "(no A) o (no B)"

  - La negación de la conjunción es igual a la diyunción de las negaciones. 
  "no (A o B)" es lo mismo que "(no A) y (no B)" 
*/

#include <iostream>
using namespace std;

int main() {
  int a, b;
  bool boolA, boolB , expresion1, expresion2, expresion3, expresion4;

  while (a != 1 && a != 0) {
    cout << "Ingrese 1 para que su primer proposición sea verdadera o, 2 para que sea falsa" << endl;
    cin >> a;
  }

  while (b != 1 && b != 0) {
    cout << "Ingrese 1 para que su segunda proposición sea verdadera o, 2 para que sea falsa" << endl;
    cin >> b;
  }

  if (a == 1) {
    boolA = true;
  } else {
    boolA = false;
  } 

  if (b == 1) {
    boolB = true;
  } else {
    boolB = false;
  } 


  // Primera ley de Morgan
  expresion1 = !(boolA && boolB);
  expresion2 = !boolA || !boolB;

  // Segunda ley de Morgan
  expresion3 = !(boolA || boolB);
  expresion4 = !boolA && !boolB;

  cout << "Expresion1: " << expresion1 << endl;
  cout << "Expresion2: " << expresion2 << endl;
  cout << "Expresion3: " << expresion3 << endl;
  cout << "Expresion4: " << expresion4 << endl;


  if (expresion1 == expresion2 && expresion3 == expresion4) {
    cout << "Para el caso a = " << a << " y b = " << b << " se comprueban las Leyes de Morgan como válidas" << endl;
  } else {
      cout << "Para el caso a = " << a << " y b = " << b << "fallan las Leyes de Morgan !!!!!!!" << endl;
  }

  return 0;
}

