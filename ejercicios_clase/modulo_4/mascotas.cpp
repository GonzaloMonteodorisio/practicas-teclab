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

    void responderSaludor(){
        cout << "Hola, soy " << this->get_nombre() << endl;
    }

};

class Perros : public Mascotas{

    public:
    void ladrar(){
        cout << "Guau Guau" << endl;
    }

    void saludarGato(Gatos variable){
        variable.responderSaludor();
    }

};

int main()
{
    Perros myMascota;
    myMascota.set_nombre("Xalo");
    myMascota.set_peso(51);
    myMascota.set_raza("Ovejero");
    myMascota.mostrar();
    myMascota.ladrar();

    cout << "----------------" << endl;


    Gatos myMascota2;
    myMascota2.set_nombre("Thender");
    myMascota2.set_peso(6);
    myMascota2.set_raza("Mestizo");

    myMascota2.mostrar();
    myMascota2.maullar();

    cout << "----------------" << endl;

    myMascota.saludarGato(myMascota2);
}