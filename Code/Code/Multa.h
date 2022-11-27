#ifndef MULTA_H
#define MULTA_H

#include <string>
#include <iostream>

using namespace std;

class Multa{
    private:
        long long int contadorMultas;
        long long int cantidadPagar;
        string fechaLimite;
        string fechaHoy;
        string razonMulta;
        string siono;
        string nombreDelincuente; 
    public:
        Multa();
        Multa(long long int, long long int, string, string, string, string, string);
        
        long long int generacionFolio();
        string imprimeMulta();
        string getDatosM();
        
        void setContadorMultas();
        long long int getContadorMultas();
        
        void setCantidadPagar(long long int);
        long long int getCantidadPagar();

        void setFechaLimite(string);
        string getFechaLimite();

        void setFechaHoy(string);
        string getFechaHoy();

        void setRazonMulta(string);
        string getRazonMulta();

        void setSiono(string);
        string getSiono();
        
        void setNombreDelincuente(string);
        string getNombreDelincuente();
};
#endif //MULTA_H