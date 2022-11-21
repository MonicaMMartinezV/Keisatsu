#include "Celda.h"
#include <iostream>

Celda::Celda()
{
    for(int i = 0; i <= 15; i++)
    {
        celdasCarcel[i][0] = i;
        celdasCarcel[i][1] = 0;
        celdasCarcel[i][2] = 0;
    }
}

Celda::~Celda()
{}

/*void Celda::agregarDatos(int _numCelda,
                         int _horasAsignadas)
{
    numCelda = _numCelda;
    horasAsignadas = _horasAsignadas;
}*/

void Celda::guardarCelda(long long int delId, long long int horasAsignadas)
{
    bool found;

    for(int i = 0; i < 15; i++)
    {
        if(celdasCarcel[i][1] == delId)
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
                celdasCarcel[i][1] = delId;
                celdasCarcel[i][2] = horasAsignadas;
                numCelda             = i;
                break;
            }
        }
    }
}

string Celda::verDatos()
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

void Celda::sacarDelCelda(long long int idDel)
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