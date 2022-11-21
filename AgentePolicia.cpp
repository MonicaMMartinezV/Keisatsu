#include "AgentePolicia.h"
#include <iostream>

using namespace std;

AgentePolicia::AgentePolicia()
{}

AgentePolicia::~AgentePolicia()
{}

void AgentePolicia::agregarDelct(long long int delId,
                  long long int horasAsignadas)
{
    celAsg.guardarCelda(delId, horasAsignadas);
}

void AgentePolicia::sacarDelct(long long int delId)
{
    celAsg.sacarDelCelda(delId);
}

void AgentePolicia::verDatos()
{
    cout << celAsg.verDatos();
}