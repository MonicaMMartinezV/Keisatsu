#include "Celda.h"

Celda::Celda()
{
    for(int i = 0; i <= 15; i++)
    {
        celdasCarcel[i][0] = i;
        celdasCarcel[i][1] = 0;
        celdasCarcel[i][2] = 0;
    }
}

Celda::Celda(long long int _numCelda,
             long long int _celdasCarcel[15][3],
             long long int _horasAsignadas,
             int _idDel)
{
    numCelda = _numCelda;
    for(int i = 0; i <= 15; i++)
    {
        celdasCarcel[i][0] = i;
        celdasCarcel[i][1] = _celdasCarcel[i][1];
        celdasCarcel[i][2] = _celdasCarcel[i][1];
    }
    guardarCelda(_idDel, _horasAsignadas);
    horasAsignadas = _horasAsignadas;
    idDel = _idDel;
}

void Celda::guardarCelda(int idDel,
                         long long int horasAsignadas)
{
    bool found;

    for(int i = 0; i < 15; i++)
    {
        if(celdasCarcel[i][1] == idDel)
        {
            found  = true;
            numCelda = i;
            break;
        }
    }

    if(!found)
    {
        for(int i = 0; i < 15; i++)
        {
            if(celdasCarcel[i][1] == 0)
            {
                celdasCarcel[i][1] = idDel;
                celdasCarcel[i][2] = horasAsignadas;
                numCelda = i;
                break;
            }
        }
    }
}

void Celda::sacarDelCelda(int idDel)
{
    for(int i = 0; i < 15; i++)
    {
        if(celdasCarcel[i][1] == idDel)
        {
            celdasCarcel[i][1] = 0;
            celdasCarcel[i][2] = 0;
        }
    }
}

string Celda::getDatosC()
{
    string infCelda = "Num de Celda\t\tID Delincuente\t\tHoras por cumplir\n";

    for(int i = 0; i < 15; i++)
    {
        infCelda += to_string(i) + "\t\t\t";
        infCelda += to_string(celdasCarcel[i][1]) + "\t\t\t";
        infCelda += to_string(celdasCarcel[i][2]) + "\n";
    }

    return infCelda;
}

void Celda::setNumCelda(long long int _numCelda){
    numCelda = _numCelda;
}

long long int Celda::getNumCelda(){
    return numCelda;
}

void Celda::setCeldas(long long int _celdasCarcel[15][3]){
    **celdasCarcel = **_celdasCarcel;
}

auto Celda::getCeldas(){
    return celdasCarcel;
}

void Celda::setHorasAsignadas(long long int _horasAsignadas){
    horasAsignadas = _horasAsignadas;
}

long long int Celda::getHorasAsignadas(){
    return horasAsignadas;
}

void Celda::setIdDel(int _idDel){
    idDel = _idDel;
}

int Celda::getIdDel(){
    return idDel;
}