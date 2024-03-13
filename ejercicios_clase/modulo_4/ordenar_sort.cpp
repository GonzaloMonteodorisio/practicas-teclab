#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int lista[] = {12, 4, 25, 1, 10, 11, 18};
    sort(begin(lista), end(lista), greater<int>());
    for (int i = 0; i < 7; ++i){
        cout << lista[i] << endl;
    }

}