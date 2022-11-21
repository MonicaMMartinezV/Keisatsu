#ifndef AGENTEPOLICIA_H
#define AGENTEPOLICIA_H

#include <string>
#include "Celda.h"

using namespace std;

class AgentePolicia{
    private:
        Celda celAsg;
    public:
        void agregarDelct(long long int delId,
                          long long int horasAsignadas);
        void sacarDelct(long long int delId);
        void verDatos();
    AgentePolicia();
    ~AgentePolicia();
};
#endif //AGENTEPOLICIA_H