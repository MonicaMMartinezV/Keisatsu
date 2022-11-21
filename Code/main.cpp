#include <iostream>
#include "Personal.h"
#include "Personal.cpp"
#include "Pago.h"
#include "Pago.cpp"
#include "Multa.h"
#include "Multa.cpp"
#include "Delincuente.h"
#include "Delincuente.cpp"
#include "Celda.h"
#include "Celda.cpp"
#include "PoliciaTransito.h"
#include "PoliciaTransito.cpp"
#include "AgentePolicia.h"
#include "AgentePolicia.cpp"

using namespace std;

int main(){
    Personal        p1;
    Pago            pg1;
    PoliciaTransito pt1;
    Multa           m1;
    Delincuente     d1;
    AgentePolicia   a1;
    /*long long int id = ;
    string password = ;
    string nombre = "Monica";
    string genero = "Femenino";
    string puesto = "Policia";
    long long int telefono = ;
    //Pago salario;
    int ansTrabajo = ;
    cin >> id;
    cin >> password; 
    cin >> nombre;
    cin >> genero;
    cin >> puesto;
    cin >> telefono;
    cin >> ansTrabajo;
    */
    p1.agregarDatos(101710965LL,"Acapulco","Monica","Femenino","Policia",4421856458LL,3);
    cout << p1.verDatos();
    pg1.agregarDatos(40,2.5,"no");
    cout << pg1.verDatos() << endl;
    pt1.expedirMulta(1000,"21/08/2023","20/11/2022","Se paso el alto","si");
    
    //d1.agregarDatos(1234LL,"Juan Jimenez", "HHdjheiJ13",44245623LL,44275861LL);
    //cout << d1.verDatos()<< endl;

    a1.agregarDelct(1234,48);
    a1.agregarDelct(1235,2);
    a1.verDatos();
    a1.sacarDelct(1235);
    a1.verDatos();
    
    //system("Pause");
}