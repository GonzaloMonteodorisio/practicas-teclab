#include <iostream>
using namespace std;

int main()
{
    int lista[] = {12, 4, 25, 1, 10, 11, 18};
    for( int i = 0; i < 7; i++ ){
        int indice = i;
        for( int j = i+1; j < 7; j++ ){
            if( lista[j] < lista[indice] ){
                indice = j;
            }
        }
        int temp = lista[indice];
        lista[indice] = lista[i];
        lista[i] = temp;
    }
    
    for (int i = 0; i < 7; i++){
        cout << lista[i] << endl;
    }
}