#include "Personal.h"

Personal::Personal()
{}

Personal::~Personal()
{}

void Personal::agregarDatos(long long int _id,
                            string        _password,
                            string        _nombre,
                            string        _genero,
                            string        _puesto,
                            long long int _telefono,
                            int           _ansTrabajo){
   id = _id;
   password = _password;
   nombre = _nombre;
   genero = _genero;
   puesto = _puesto;
   telefono = _telefono;
   ansTrabajo = _ansTrabajo;
}

string Personal::verDatos(){
    string datos = "ID: " + to_string(id) + "\n" +
                   "Password: " + password + "\n" +
                   "Nombre: " + nombre + "\n" +
                   "Genero: " + genero + "\n" + 
                   "Puesto de trabajo: " + puesto + "\n" +
                   "Telefono: " + to_string(telefono) + "\n" + 
                   "Años de experiencia: " + to_string(ansTrabajo) + "\n";
    return datos;
}