#include "Pago.h"
#include <iostream>

Pago::Pago()
{}

Pago::~Pago()
{}

void Pago::agregarDatos(float _horasTrabajadas,
                        float _horasExtra,
                        string   _razon)
{
    horasTrabajadas = _horasTrabajadas;
    horasExtra      = _horasExtra;
    razon           = _razon;
}

float Pago::calculoSalario(){
    float pagadas = 120.0 * horasTrabajadas;
    float pagadaextra = 240.0 * horasExtra;
    float total = pagadas + pagadaextra;
    
    return total; 
}

void Pago::solicitudCambio(){
    if (razon == "no")
    {
        cout<<"Muchas gracias por tu respuesta, hasta pronto"<<endl;
    }
    else
    {
        cout<<"Le enviaremos tu razon de cambio al adminitrador"<<endl;
        cout<<"Recibiras respuesta en aproximadamente 3 dias habiles después de enviada esta razon"<<endl;
        cout<<"Gracias y hasta luego"<<endl;
    }
}

string Pago::verDatos(){
    solicitudCambio();
    return "Salario: " + to_string(calculoSalario());
}