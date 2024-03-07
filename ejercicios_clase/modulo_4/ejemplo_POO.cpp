#include <iostream>
using namespace std;

class Mascotas{

    int peso;
    string nombre;
    string raza;

    public:

        void set_peso(int variable){
            peso = variable;
        }

        void set_nombre(string variable){
            nombre = variable;
        }

        void set_raza(string variable){
            raza = variable;
        }

        int get_peso(){
            return peso;
        }

        string get_nombre(){
            return nombre;
        }

        void mostrar(){
            cout << "Nombre " << nombre << endl;
            cout << "Raza " << raza << endl;
            cout << "Peso " << peso << endl;

        }


};

class Gatos: public Mascotas{

    public:
    void maullar(){
        cout << "Miau Miau" << endl;
    }


};

int main()
{
    Mascotas myMascota;
    myMascota.set_nombre("Xalo");
    myMascota.set_peso(51);
    myMascota.set_raza("Ovejero");
    myMascota.mostrar();

    cout << "----------------" << endl;
    
    Gatos myGato;
    
    myGato.set_nombre("Thunder");
    myGato.set_peso(6);
    myGato.set_raza("Mestizo");

    myGato.mostrar();
    myGato.maullar();
}