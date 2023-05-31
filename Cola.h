#pragma once
#include "Nodo.h"

class Cola
{
private:
    int aM;         // Tamaño, cantidad de casillas total
    int aP;         // Tamaño inicial se mueve a la posición 1 y se inmoviliza
    int aU;         // Tamaño final, se va moviendo aU 1++
    Nodo* aInicio;  // Puntero al nodo de inicio de la cola
    bool aI;        // Para saber si se puede o no realizar

public:
    Cola();
    ~Cola();

    bool getaI();
    void setaI(bool value);

    int getaM();
    void setaM(int value);

    int getaP();
    void setaP(int value);

    int getaU();
    void setaU(int value);

    Nodo* getaInicio();
    void setaInicio(Nodo* value);

    void crear(int cantidad);
    bool probar();
    int ver();
    void insertar();
    int eliminar();
    int destruir();
};
