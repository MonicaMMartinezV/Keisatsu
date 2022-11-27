#include "Multa.h"

Multa::Multa(){
    contadorMultas = 0;
}

Multa::Multa(long long int _contadorMultas, 
             long long int _cantidadPagar, 
             string _fechaLimite,  
             string _fechaHoy, 
             string _razonMulta, 
             string _siono,
             string _nombreDelincuente)
{
    cantidadPagar = _cantidadPagar; 
    fechaLimite  = _fechaLimite;
    fechaHoy     = _fechaHoy;
    razonMulta   = _razonMulta;
    siono        = _siono;
    contadorMultas = _contadorMultas; 
    contadorMultas = 0;
    nombreDelincuente = _nombreDelincuente;
}   

long long int Multa::generacionFolio(){
    contadorMultas++;
    return (1000 + contadorMultas); 
}

string Multa::imprimeMulta(){
    if ((siono == "si") || (siono == "Si") || (siono == "SI"))
    {
        string res = "Enviaremos la multa a la Impresora Epson309XL";
        return res;
    }
    else if ((siono == "no") || (siono == "No") || (siono == "NO"))
    {
        string res = "Ok, muchas gracias por tu respuesta. Buen día";
        return res;
    }
    else
    {
        string res = "Respuesta no valida";
        return res;
    }
}

string Multa::getDatosM(){
    long long int contMultas = generacionFolio();
    string datos = "Folio: " + to_string(contMultas) + "\n" +
                   "Cantidad a pagar: " + to_string(cantidadPagar) + "\n" +
                   "Fecha limite: " + fechaLimite   + "\n" +
                   "Fecha de expedicion: " + fechaHoy      + "\n" +
                   "Razon: " + razonMulta + "\n" +
                   imprimeMulta() + "\n" + 
                   "Nombre del delincuente: " + nombreDelincuente + "\n";
    return datos;
}

void Multa::setContadorMultas(){
    contadorMultas++;
}

long long int Multa::getContadorMultas(){
    return contadorMultas;
}

void Multa::setCantidadPagar(long long int _cantidadPagar){
    cantidadPagar = _cantidadPagar;
}

long long int Multa::getCantidadPagar(){
    return cantidadPagar;
}

void Multa::setFechaLimite(string _fechaLimite){
    fechaLimite = _fechaLimite;
}

string Multa::getFechaLimite(){
    return fechaLimite;
}

void Multa::setFechaHoy(string _fechaHoy){
    fechaHoy = _fechaHoy;
}

string Multa::getFechaHoy(){
    return fechaHoy;
}

void Multa::setRazonMulta(string _razonMulta){
    razonMulta = _razonMulta;
}

string Multa::getRazonMulta(){
    return razonMulta;
}

void Multa::setSiono(string _siono){
    siono = _siono;
}

string Multa::getSiono(){
    return siono;
}

void Multa::setNombreDelincuente(string _nombreDelincuente){
    nombreDelincuente = _nombreDelincuente;
}

string Multa::getNombreDelincuente(){
    return nombreDelincuente;
}