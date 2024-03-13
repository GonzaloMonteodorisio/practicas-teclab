#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> mivector = {5, 1};
    cout << "cantidad de elementos " << mivector.size() << endl;
    cout << mivector[1] << endl;
    cout << "*********" << endl;
    mivector.push_back(22); // inserta al final
    mivector.insert(mivector.begin(),10); // inserta al inicio
    
    
    for (int i = 0; i < mivector.size(); i ++){
        cout << mivector[i] << endl;
    }
    
    
}