#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<string> elementos;
    int size = 10;
    string elemento, mayor, menor;

    for (int i = 0; i < size; i ++) {
      cout << "Ingresa un elemento:" << endl;
      cin >> elemento;
      elementos.push_back(elemento); // inserta al final
    }
    
    mayor = elementos[0];
    menor = elementos[0];
    
    for (int i = 1; i < size; i ++) {
      if (elementos[i] > mayor) {
        mayor = elementos[i];
      }
      if (elementos[i] < menor) {
        menor = elementos[i];
      }
    }

    cout << "El elemento menor es: " << menor << endl;
    cout << "El elemento mayor es: " << mayor << endl;
}