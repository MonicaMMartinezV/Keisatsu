#ifndef CELDA_H
#define CELDA_H

#include <string>

using namespace std;

class Celda{
    private:
        long long int numCelda = 0LL;
        long long int celdasCarcel[15][3];
        //Delincuente del;
    public:
        //void                   agregarDatos();
        void   guardarCelda(long long int delId,
                            long long int horasAsignadas);
        void   sacarDelCelda(long long int idDel);
        string verDatos();    
    Celda();
    ~Celda();
};
#endif //CELDA_H