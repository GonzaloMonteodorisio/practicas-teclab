#include <iostream>
#include <list>
using namespace std;

int main() {
  list<int> miLista = {10, 9, 5, 7};

  auto ultimo = miLista.end();

  std::cout << "Tipo de dato de 'ultimo': " << typeid(ultimo).name() << std::endl; // Imprime el nombre del tipo de 'x'

  miLista.insert(ultimo, 20);

  for (int numero : miLista) {
    cout << numero << endl;
  }

  return 0;
}