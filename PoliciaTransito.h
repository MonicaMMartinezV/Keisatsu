#ifndef POLICIATRANSITO_H
#define POLICIATRANSITO_H

#include <string>
#include "Multa.h"

using namespace std;

class PoliciaTransito{
    private:
        Multa mlt;
    public:
        void agregarDatos();
        void expedirMulta(int    cantidadPagar,
                          string fechaLimite,
                          string fechaHoy,
                          string razonMulta,
                          string siono);
        string verDatos();

    PoliciaTransito();
    ~PoliciaTransito();
};
#endif //POLICIATRANSITO_H