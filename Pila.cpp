#include "Pila.h"
#include "Nodo.h"
#include <iostream>

Pila::Pila()
{
    aM = 0;
    aT = 0;
    aArrPila = NULL;
    aI = false;
}

Pila::~Pila()
{
    delete[] aArrPila;
}

int Pila::getTamMaximo()
{
    return aM;
}

int Pila::getTamActual()
{
    return aT;
}

bool Pila::getaI()
{
    return aI;
}

void Pila::crear(int tamMaximo)
{
    aM = tamMaximo;
    aT = 0;
    aArrPila = new Nodo[aM];
    aI = true;
}

void Pila::apilar(int elemento)
{
    if (aT < aM)
    {
        aArrPila[aT].info = elemento;
        aT++;
        aI = true;
    }
    else
    {
        aI = false;
    }
}

int Pila::desapilar()
{
    if (aT > 0)
    {
        aT--;
        aI = true;
        return aArrPila[aT].info;
    }
    else
    {
        aI = false;
        return 0;
    }
}

int Pila::ver()
{
    if (aT > 0)
    {
        return aArrPila[aT - 1].info;
    }
    else
    {
        return 0;
    }
}

void Pila::destruir()
{
    delete[] aArrPila;
    aM = 0;
    aT = 0;
    aArrPila = NULL;
    aI = false;
}
