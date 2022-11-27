#include "Personal.h"

Personal::Personal(){}

Personal::Personal(long long int _id,
                   string        _nombre,
                   string        _genero,
                   string        _puesto,
                   long long int _telefono,
                   int           _ansTrabajo){
   id = _id;
   nombre = _nombre;
   genero = _genero;
   puesto = _puesto;
   telefono = _telefono;
   ansTrabajo = _ansTrabajo;
}

string Personal::getDatosP(){
    string datos = "ID: " + to_string(id) + "\n" +
                   "Nombre: " + nombre + "\n" +
                   "Genero: " + genero + "\n" + 
                   "Puesto de trabajo: " + puesto + "\n" +
                   "Telefono: " + to_string(telefono) + "\n" + 
                   "Años de experiencia: " + to_string(ansTrabajo) + "\n";
    return datos;
}

void Personal::setId(long long int _id){
    id = _id;
}

long long int Personal::getId(){
    return id;
}

void Personal::setNombre(string _nombre){
    nombre = _nombre;
}

string Personal::getNombre(){
    return nombre;
}

void Personal::setGenero(string _genero){
    genero = _genero;
}

string Personal::getGenero(){
    return genero;
}

void Personal::setPuesto(string _puesto){
    puesto = _puesto;
}

string Personal::getPuesto(){
    return puesto;
}

void Personal::setTelefono(long long int _telefono){
    telefono = _telefono;
}

long long int Personal::getTelefono(){
    return telefono;
}

void Personal::setAnsTrabajo(int _ansTrabajo){
    ansTrabajo = _ansTrabajo;
}

int Personal::getAnsTrabajo(){
    return ansTrabajo;
}
