#include "Lista.h"

Lista::Lista() {
    aInicio = NULL;
    aN = 0;
    aI = false;
}

Lista::~Lista() {
    destruir();
}

bool Lista::getaI() {
    return aI;
}

void Lista::setaI(bool value) {
    aI = value;
}

int Lista::getaN() {
    return aN;
}

void Lista::setaN(int value) {
    aN = value;
}

Nodo* Lista::getaInicio() {
    return aInicio;
}

void Lista::setaInicio(Nodo* value) {
    aInicio = value;
}

void Lista::crear(int cantidad) {
    destruir(); // Destruir la lista existente antes de crear una nueva

    if (cantidad > 0) {
        aInicio = new Nodo();
        Nodo* nodoActual = aInicio;

        for (int i = 1; i < cantidad; i++) {
            nodoActual->sig = new Nodo();
            nodoActual = nodoActual->sig;
        }

        aN = cantidad;
        aI = true;
    }
    else {
        aI = false;
    }
}

bool Lista::probar() {
    return aI;
}

int Lista::ver() {
    if (aInicio != NULL) {
        return aInicio->info;
    }

    return 0; // Valor por defecto si la lista está vacía
}

void Lista::insertar() {
    if (aInicio != NULL) {
        Nodo* nuevoNodo = new Nodo();
        nuevoNodo->sig = aInicio;
        aInicio = nuevoNodo;
        aN++;
        aI = true;
    }
    else {
        aI = false;
    }
}

int Lista::eliminar() {
    if (aInicio != NULL) {
        Nodo* nodoEliminar = aInicio;
        aInicio = aInicio->sig;
        delete nodoEliminar;
        aN--;
        aI = true;
        return aN; // Retorna la nueva cantidad de datos en la lista
    }
    else {
        aI = false;
        return 0; // Valor por defecto si la lista está vacía
    }
}

int Lista::destruir() {
    int cantidad = aN;
    Nodo* nodoActual = aInicio;

    while (nodoActual != NULL) {
        Nodo* nodoEliminar = nodoActual;
        nodoActual = nodoActual->sig;
        delete nodoEliminar;
    }

    aInicio = NULL;
    aN = 0;
    aI = false;

    return cantidad; // Retorna la cantidad de nodos eliminados
}
