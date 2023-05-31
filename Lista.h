
#include <iostream>
#include "Nodo.h"

class Lista {
private:
    Nodo* aInicio;
    int aN;
    bool aI;

public:
    Lista();
    ~Lista();

    bool getaI();
    void setaI(bool value);

    int getaN();
    void setaN(int value);

    Nodo* getaInicio();
    void setaInicio(Nodo* value);

    void crear(int cantidad);
    bool probar();
    int ver();
    void insertar();
    int eliminar();
    int destruir();
};