#ifndef PAGO_H
#define PAGO_H
#include <string>

using namespace std;

class Pago{
    private:
        float horasTrabajadas;
        float horasExtra;
        string   razon;
    public:
        void   agregarDatos(float _horasTrabajadas,
                            float _horasExtra,
                            string   _razon);
        float  calculoSalario();
        void   solicitudCambio();
        string verDatos();
        
    Pago();
    ~Pago();
};
#endif // PAGO_H