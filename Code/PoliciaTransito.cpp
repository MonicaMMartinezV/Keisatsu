#include "PoliciaTransito.h"
#include <iostream>

PoliciaTransito::PoliciaTransito()
{}

PoliciaTransito::~PoliciaTransito()
{}

void PoliciaTransito::expedirMulta(int    cantidadPagar,
                                   string fechaLimite,
                                   string fechaHoy,
                                   string razonMulta,
                                   string siono)
{
    mlt.agregarDatos(cantidadPagar,
                     fechaLimite,
                     fechaHoy,
                     razonMulta,
                     siono);
    cout << mlt.verDatos();
}