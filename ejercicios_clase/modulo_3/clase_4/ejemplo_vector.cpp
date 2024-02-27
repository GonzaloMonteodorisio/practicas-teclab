#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> miVector;

  miVector.push_back(10);
  miVector.push_back(4);
  miVector.push_back(7);
  miVector.push_back(8);

  std::cout << "El tamaño de mi vector es: " << miVector.size() << endl;

  for (int i = 0; i < miVector.size(); i++) {
    cout << miVector[i] << endl;
  }

  return 0;
}