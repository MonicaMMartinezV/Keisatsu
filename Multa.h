#ifndef MULTA_H
#define MULTA_H

#include <string>

using namespace std;

class Multa{
    private:
        long long int contadorMultas = 0LL;
        int cantidadPagar;
        string fechaLimite;
        string fechaHoy;
        string razonMulta;
        string siono;
        //Delincuente del;
    public:
        void agregarDatos(int _cantidadPagar,
                          string _fechaLimite,
                          string _fechaHoy,
                          string _razonMulta,
                          string _siono);
        long long int generacionFolio();
        string imprimeMulta();
        string verDatos();
    Multa();
    ~Multa();
};
#endif //MULTA_H