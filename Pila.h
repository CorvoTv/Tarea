#pragma once
#include "Nodo.h"

class Pila
{
private:
    int aM;          // Tama�o m�ximo de la pila
    int aT;          // Posici�n del tope de la pila
    Nodo* aArrPila;  // Arreglo din�mico para almacenar los elementos de la pila
    bool aI;         // Indicador de capacidad de la pila (llena o vac�a)

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
