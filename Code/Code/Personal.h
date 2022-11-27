#ifndef PERSONAL_H
#define PERSONAL_H
#include <string>
#include <iostream>

using namespace std;

class Personal{
    private:
        long long int id;
        string nombre;
        string genero;
        string puesto;
        long long int telefono;
        int ansTrabajo;
    public:
        Personal();
        Personal(long long int, string, string, string, long long int, int);
        string getDatosP();

        void setId(long long int);
        long long int getId();

        void setNombre(string);
        string getNombre();

        void setGenero(string);
        string getGenero();

        void setPuesto(string);
        string getPuesto();

        void setTelefono(long long int);
        long long int getTelefono();

        void setAnsTrabajo(int);
        int getAnsTrabajo();
};
#endif // PERSONAL_H