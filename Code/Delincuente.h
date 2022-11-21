#ifndef DELINCUENTE_H
#define DELINCUENTE_H

#include <string>

using namespace std;

class Delincuente{
    private:
        long long int id = 0LL;
        string nombre;
        string curp;
        long long int contactoFam = 0LL;
        long long int telefono = 0LL;
    public: 
        void agregarDatos(long long int _id,
                          string _nombre,
                          string _curp,
                          long long int _contactoFam,
                          long long int _telefono);
        string verDatos();
    Delincuente();
    ~Delincuente();
};
#endif //DELINCUENTE_H