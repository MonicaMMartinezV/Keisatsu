#include "Delincuente.h"
#include <iostream>

Delincuente::Delincuente()
{}

Delincuente::~Delincuente()
{}

void Delincuente::agregarDatos(long long int _id,
                               string _nombre,
                               string _curp,
                               long long int _contactoFam,
                               long long int _telefono)
{
    id          = _id;
    nombre      = _nombre;
    curp        = _curp;
    contactoFam = _contactoFam;
    telefono    = _telefono;
}

string Delincuente::verDatos(){
    string datos = "Id: " + to_string(id) + "\n" +
                   "Nombre: " + nombre + "\n" +
                   "CURP: " + curp + "\n" +
                   "Contacto familiar: " + to_string(contactoFam) + "\n" +
                   "Telefono: " + to_string(telefono) + "\n";
    return datos;
}
