#include "Multa.h"
#include <iostream>

Multa::Multa()
{}

Multa::~Multa()
{}

void Multa::agregarDatos(int _cantidadPagar,
                  string _fechaLimite,
                  string _fechaHoy,
                  string _razonMulta,
                  string _siono)
{
    cantidadPagar = _cantidadPagar; 
    fechaLimite   = _fechaLimite;
    fechaHoy      = _fechaHoy;
    razonMulta    = _razonMulta;
    siono         = _siono;
}

long long int Multa::generacionFolio(){
    contadorMultas++;
    return (1000 + contadorMultas); 
}

string Multa::imprimeMulta(){
    if (siono == "si")
    {
        return "Enviaremos la multa a la Impresora Epson309XL";
    }
    else if (siono == "no")
    {
        return "Ok, muchas gracias por tu respuesta. Buen día";
    }
    else
    {
        return "Respuesta no valida";
    }
}

string Multa::verDatos(){
    long long int contMultas = generacionFolio();
    string datos = "Folio: " + to_string(contMultas) + "\n" +
                   "Cantidad a pagar: " + to_string(cantidadPagar) + "\n" +
                   "Fecha limite: " + fechaLimite   + "\n" +
                   "Fecha de expedicion: " + fechaHoy      + "\n" +
                   "Razon: " + razonMulta + "\n" +
                   imprimeMulta() + "\n";
    return datos;
}