#pragma once
#include "Nodo.h"

class Pila
{
private:
    int aM;          // Tamaño máximo de la pila
    int aT;          // Posición del tope de la pila
    Nodo* aArrPila;  // Arreglo dinámico para almacenar los elementos de la pila
    bool aI;         // Indicador de capacidad de la pila (llena o vacía)

public:
    Pila();
    ~Pila();

    int getTamMaximo();
    int getTamActual();
    bool getaI();

    void crear(int tamMaximo);
    void apilar(int elemento);
    int desapilar();
    int ver();
    void destruir();
};
