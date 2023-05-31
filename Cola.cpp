#include "Cola.h"
#include <iostream>
using namespace std;

#include "Cola.h"

Cola::Cola()
{
    aM = 0;
    aP = 0;
    aU = 0;
    aInicio = NULL;
    aI = false;
}

Cola::~Cola()
{
    destruir();
}

bool Cola::getaI()
{
    return aI;
}

void Cola::setaI(bool value)
{
    aI = value;
}

int Cola::getaM()
{
    return aM;
}

void Cola::setaM(int value)
{
    aM = value;
}

int Cola::getaP()
{
    return aP;
}

void Cola::setaP(int value)
{
    aP = value;
}

int Cola::getaU()
{
    return aU;
}

void Cola::setaU(int value)
{
    aU = value;
}

Nodo* Cola::getaInicio()
{
    return aInicio;
}

void Cola::setaInicio(Nodo* value)
{
    aInicio = value;
}

void Cola::crear(int cantidad)
{
    destruir(); // Destruir la cola existente antes de crear una nueva

    if (cantidad > 0)
    {
        aInicio = new Nodo();
        Nodo* nodoActual = aInicio;

        for (int i = 1; i < cantidad; i++)
        {
            nodoActual->sig = new Nodo();
            nodoActual = nodoActual->sig;
        }

        aM = cantidad;
        aP = 1;
        aU = cantidad;
        aI = true;
    }
    else
    {
        aI = false;
    }
}

bool Cola::probar()
{
    return aI;
}

int Cola::ver()
{
    if (aInicio != NULL)
    {
        return aInicio->info;
    }

    return 0; // Valor por defecto si la cola está vacía
}

void Cola::insertar()
{
    if (aInicio != NULL)
    {
        Nodo* nuevoNodo = new Nodo();
        nuevoNodo->sig = aInicio;
        aInicio = nuevoNodo;
        aP++;
        aI = true;
    }
    else
    {
        aI = false;
    }
}

int Cola::eliminar()
{
    if (aInicio != NULL)
    {
        int valor = aInicio->info;
        Nodo* nodoEliminar = aInicio;
        aInicio = aInicio->sig;
        delete nodoEliminar;
        aP--;
        aI = true;
        return valor;
    }
    else
    {
        aI = false;
        return 0; // Valor por defecto si la cola está vacía
    }
}

int Cola::destruir()
{
    int cantidad = aU - aP + 1;

    while (aInicio != NULL)
    {
        Nodo* nodoEliminar = aInicio;
        aInicio = aInicio->sig;
        delete nodoEliminar;
    }

    aM = 0;
    aP = 0;
    aU = 0;
    aI = false;

    return cantidad;
}