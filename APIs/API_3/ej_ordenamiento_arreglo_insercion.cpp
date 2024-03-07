#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        
        // Mover los elementos del arreglo que son mayores que key
        // a una posición adelante de su posición actual
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    vector<int> arreglo = {12, 11, 13, 5, 6};

    cout << "Arreglo antes del ordenamiento:" << endl;
    for (int i = 0; i < arreglo.size(); ++i) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    // Aplicar el ordenamiento por inserción
    insertionSort(arreglo);

    cout << "Arreglo después del ordenamiento:" << endl;
    for (int i = 0; i < arreglo.size(); ++i) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    return 0;
}