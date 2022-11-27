#ifndef AGENTEPOLICIA_H
#define AGENTEPOLICIA_H
#include <string>
#include "Personal.h"
#include "Celda.h"
#include "Multa.h"

using namespace std;

class AgentePolicia: public Personal{
    private:
        Celda celAsg;
        long long int numeroDel;
    public:
        AgentePolicia();
        AgentePolicia(long long int, string, string, string, long long int , int, Celda, long long int);
        void agregarDelct(long long int, long long int);
        void sacarDelct(long long int);
        string getDatosAP();

        void setCelAsg(Celda);
        Celda getCelAsg();

        void setNumeroDel(long long int);
        long long int getNumeroDel();
};
#endif //AGENTEPOLICIA_H