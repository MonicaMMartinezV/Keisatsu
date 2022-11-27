#ifndef POLICIATRANSITO_H
#define POLICIATRANSITO_H
#include <string>
#include <iostream>
#include "Personal.h"
#include "Multa.h"

using namespace std;

class PoliciaTransito:public Personal{
    private:
        Multa mlt;
    public:
        PoliciaTransito();
        PoliciaTransito(long long int _id,
                        string _nombre,
                        string _genero,
                        string _puesto,
                        long long int _telefono,
                        int _ansTrabajo,
                        Multa _mlt);
        void setDatosMulta(long long int, string, string, string, string);
        string expedirMulta();
        string getDatosPT();
        
        void setmlt(Multa);
        Multa getmlt();
};
#endif //POLICIATRANSITO_H