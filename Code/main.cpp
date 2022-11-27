#include <iostream>
#include "Personal.h"
#include "Personal.cpp"
#include "Multa.h"
#include "Multa.cpp"
#include "Celda.h"
#include "Celda.cpp"
#include "PoliciaTransito.h"
#include "PoliciaTransito.cpp"
#include "AgentePolicia.h"
#include "AgentePolicia.cpp"

using namespace std;

int main(){
    int op;
    Celda celda1;
    cout<<"======================================================================================\n";
    cout<<"============================= Hola bienvenido a Keisatsu =============================\n";
    cout<<"======================================================================================\n";    
    cout<<"      --- MENU ---\n";
    cout<<"1. Agente de Policía\n";
    cout<<"2. Policía de Tránsito\n";
    cout<<"3. Salir\n";
    cout<<"Ingresa una opcion: ";
    cin>>op;
    if (op == 1)
    {
        string celdaSN;
        cout << "¿Quieres asignar una celda?: ";
        cin >> celdaSN;
        if ((celdaSN == "si") || (celdaSN == "Si") || (celdaSN == "SI"))
        {
            cout<<"Muchas gracias por tu respuesta. Contesta lo que se te pida para asignar una celda\n";
            long long int numC;
            long long int horasA;
            int idDelincuente;
            long long int numDelincuente;
            cout<<"Ingresa numero de celda: ";
            cin>>numC;
            cout<<"\n";
            cout<<"Ingresa las horas asignadas: ";
            cin>>horasA;
            cout<<"\n";
            cout<<"Ingresa el ID del delincuente: ";
            cin>>idDelincuente;
            cout<<"\n";
            cout<<"Ingresa el numero del delincuente: ";
            cin>>numDelincuente;
            cout<<"\n";
            long long int celdasCarcel[15][3];
            Celda celda2(numC, celda1.getCeldas(), horasA, idDelincuente);
            long long int idP;
            string nombreP;
            string generoP;
            long long int telefonoP;
            int anosTP;
            cout<<"Ingresa tu ID: ";
            cin>>idP;
            cout<<"\n";
            cout<<"Ingresa tu nombre: ";
            getline(cin>>ws, nombreP);
            cout<<"\n";
            cout<<"Ingresa tu genero: ";
            cin>>generoP;
            cout<<"\n";
            cout<<"Ingresa tu celular/telefono: ";
            cin>>telefonoP;
            cout<<"\n";
            cout<<"Ingresa tus anos de experiencia: ";
            cin>>anosTP;
            cout<<"\n";
            AgentePolicia agentepolicia1(idP, nombreP, generoP, "Agente de policia" , telefonoP, anosTP, celda2, numDelincuente);
            cout << agentepolicia1.getDatosAP();
        }
        else if ((celdaSN == "no") || (celdaSN == "No") || (celdaSN == "NO"))
        {
            cout<<"Muchas gracias por tu respuesta. Contesta lo que se te pida\n";
            Celda celda1;
            long long int idP;
            string nombreP;
            string generoP;
            long long int telefonoP;
            int anosTP;
            cout<<"Ingresa tu ID: ";
            cin>>idP;
            cout<<"\n";
            cout<<"Ingresa tu nombre: ";
            getline(cin>>ws, nombreP);
            cout<<"\n";
            cout<<"Ingresa tu genero: ";
            cin>>generoP;
            cout<<"\n";
            cout<<"Ingresa tu celular/telefono: ";
            cin>>telefonoP;
            cout<<"\n";
            cout<<"Ingresa tus anos de experiencia: ";
            cin>>anosTP;
            cout<<"\n";
            AgentePolicia agentepolicia1(idP, nombreP, generoP, "Agente de policia" , telefonoP, anosTP, celda1, 0);
            cout << agentepolicia1.getDatosAP();
        }
        else
        {
            cout<<"Respuesta no valida";
        }
    }
    else if (op == 2)
    {
        string MultaSN;
        cout << "¿Quieres expedir una multa?: ";
        cin >> MultaSN;
        if ((MultaSN == "si") || (MultaSN == "Si") || (MultaSN == "SI"))
        {
            cout<<"Muchas gracias por tu respuesta. Contesta lo que se te pida para expedir la multa\n";
            long long int cantidadP;
            string fechaL;
            string fechaH;
            string razonM;
            string sioN;
            string nombreD;
            cout<<"Ingresa la cantidad a pagar: ";
            cin>>cantidadP;
            cout<<"\n";
            cout<<"Ingresa la fecha limite de pago: ";
            getline(cin>>ws, fechaL);
            cout<<"\n";
            cout<<"Ingresa la fecha del dia de hoy: ";
            getline(cin>>ws, fechaH);
            cout<<"\n";
            cout<<"Ingresa la razon de la multa: ";
            getline(cin>>ws, razonM);
            cout<<"\n";
            cout<<"Ingresa el nombre del delincuente: ";
            getline(cin>>ws, nombreD);
            cout<<"\n";
            cout<<"¿Quieres que se mande a imprimir?: ";
            cin>>sioN;
            cout<<"\n";
            Multa multa1(9, cantidadP, fechaL, fechaH, razonM, sioN, nombreD);
            long long int idP;
            string nombreP;
            string generoP;
            long long int telefonoP;
            int anosTP;
            cout<<"Ingresa tu ID: ";
            cin>>idP;
            cout<<"\n";
            cout<<"Ingresa tu nombre: ";
            getline(cin>>ws, nombreP);
            cout<<"\n";
            cout<<"Ingresa tu genero: ";
            cin>>generoP;
            cout<<"\n";
            cout<<"Ingresa tu celular/telefono: ";
            cin>>telefonoP;
            cout<<"\n";
            cout<<"Ingresa tus anos de experiencia: ";
            cin>>anosTP;
            cout<<"\n";
            PoliciaTransito policiatransito1(idP, nombreP, generoP, "Policia de transito" , telefonoP, anosTP, multa1);
            cout << policiatransito1.getDatosPT() << policiatransito1.expedirMulta();
        } 
        else if ((MultaSN == "no") || (MultaSN == "No") || (MultaSN == "NO"))
        {
            cout<<"Muchas gracias por tu respuesta. Contesta lo que se te pida\n";
            long long int idP;
            string nombreP;
            string generoP;
            long long int telefonoP;
            int anosTP;
            cout<<"Ingresa tu ID: ";
            cin>>idP;
            cout<<"\n";
            cout<<"Ingresa tu nombre: ";
            getline(cin>>ws, nombreP);
            cout<<"\n";
            cout<<"Ingresa tu genero: ";
            cin>>generoP;
            cout<<"\n";
            cout<<"Ingresa tu celular/telefono: ";
            cin>>telefonoP;
            cout<<"\n";
            cout<<"Ingresa tus anos de experiencia: ";
            cin>>anosTP;
            cout<<"\n";
            Multa multa1;
            PoliciaTransito policiatransito1(idP, nombreP, generoP, "Policia de transito" , telefonoP, anosTP, multa1);
            cout << policiatransito1.getDatosPT();
        }
        else
        {
            cout<<"Respuesta no valida";
        }
    }
    else if (op == 3)
    {
        cout<<"Gracias por utilizar Keisatsu :D\n";
    }
}