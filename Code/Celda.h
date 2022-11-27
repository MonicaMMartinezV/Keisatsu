#ifndef CELDA_H
#define CELDA_H
#include <string>

using namespace std;

class Celda{
    private:
        long long int numCelda;
        long long int celdasCarcel[15][3];
        long long int horasAsignadas;
        int idDel;
    public:
        Celda();
        Celda(long long int, long long int [15][3], long long int, int);
        void guardarCelda(int, long long int);
        void sacarDelCelda(int);
        string getDatosC();
        
        void setNumCelda(long long int);
        long long int getNumCelda();

        void setCeldas(long long int _celdasCarcel[15][3]);
        auto getCeldas();

        void setHorasAsignadas(long long int);
        long long int getHorasAsignadas();

        void setIdDel(int);
        int getIdDel();
};
#endif //CELDA_H