#include "PoliciaTransito.h"

PoliciaTransito::PoliciaTransito()
{}

PoliciaTransito::PoliciaTransito(long long int _id,
                                 string _nombre,
                                 string _genero,
                                 string _puesto,
                                 long long int _telefono,
                                 int _ansTrabajo,
                                 Multa _mlt) : 
                                 Personal(_id,
                                          _nombre,
                                          _genero,
                                          _puesto,
                                          _telefono,
                                          _ansTrabajo)
{
    mlt = _mlt;

}

void PoliciaTransito::setDatosMulta(long long int cantidadPagar,
                                    string fechaLimite,
                                    string fechaHoy,
                                    string razonMulta,
                                    string siono)
{
    mlt.setContadorMultas();
    mlt.setCantidadPagar(cantidadPagar);
    mlt.setFechaLimite(fechaLimite);
    mlt.setFechaHoy(fechaHoy);
    mlt.setRazonMulta(razonMulta);
    mlt.setSiono(siono);
}

string PoliciaTransito::expedirMulta(){
    return mlt.getDatosM();
}

string PoliciaTransito::getDatosPT()
{
    return getDatosP();
}

void PoliciaTransito::setmlt(Multa _mlt){
    mlt = _mlt;
}

Multa PoliciaTransito::getmlt(){
    return mlt;
}