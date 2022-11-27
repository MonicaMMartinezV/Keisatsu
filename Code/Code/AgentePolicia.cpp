#include "AgentePolicia.h"
#include <iostream>

using namespace std;

AgentePolicia::AgentePolicia()
{}

AgentePolicia::AgentePolicia(long long int _id,
                             string        _nombre,
                             string        _genero,
                             string        _puesto,
                             long long int _telefono,
                             int           _ansTrabajo,
                             Celda         _celAsg,
                             long long int _numeroDel) : 
                             Personal(_id,
                                      _nombre,
                                      _genero,
                                      _puesto,
                                      _telefono,
                                      _ansTrabajo)
{
    celAsg = _celAsg;
    numeroDel = _numeroDel;
}

void AgentePolicia::agregarDelct(long long int numeroDel,
                                 long long int horasAsignadas)
{
    celAsg.guardarCelda(numeroDel, horasAsignadas);
}

void AgentePolicia::sacarDelct(long long int numeroDel)
{
    celAsg.sacarDelCelda(numeroDel);
}

string AgentePolicia::getDatosAP()
{
    return getDatosP() + celAsg.getDatosC();
}

void AgentePolicia::setCelAsg(Celda _celAsg){
    celAsg = _celAsg;
}

Celda AgentePolicia::getCelAsg(){
    return celAsg;
}

void AgentePolicia::setNumeroDel(long long int _numeroDel){
    numeroDel = _numeroDel;
}

long long int AgentePolicia::getNumeroDel(){
    return numeroDel;
}