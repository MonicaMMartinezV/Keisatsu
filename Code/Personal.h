#ifndef PERSONAL_H
#define PERSONAL_H
#include <string.h>

using namespace std;

class Personal{
    private:
        long long int id = 0LL;
        string password;
        string nombre;
        string genero;
        string puesto;
        long long int telefono = 0LL;
        //Pago salario;
        int ansTrabajo;
    public:
        string verDatos();
        void agregarDatos(long long int _id,
                          string        _password,
                          string        _nombre,
                          string        _genero,
                          string        _puesto,
                          long long int _telefono,
                          int           _ansTrabajo);
    Personal();
    ~Personal();
};
#endif // PERSONAL_H