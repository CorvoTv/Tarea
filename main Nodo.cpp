#include <iostream>
#include "Cola.h"
#include "Pila.h"
#include "Lista.h"

using namespace std;

int main()
{
    Cola cola;
    Pila pila;
    Lista lista;

    int opcion;

    do {
        cout << "------ Menú ------" << endl;
        cout << "1. Operar con Cola" << endl;
        cout << "2. Operar con Pilas" << endl;
        cout << "3. Operar con Lista" << endl;
        cout << "0. Salir" << endl;
        cout << "-------------------" << endl;
        cout << "Ingrese una opción: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            int opcionCola;
            cout << "------ Operaciones con Cola ------" << endl;
            cout << "1. Crear Cola" << endl;
            cout << "2. Insertar elemento" << endl;
            cout << "3. Eliminar elemento" << endl;
            cout << "4. Ver elemento en la cola" << endl;
            cout << "0. Volver" << endl;
            cout << "----------------------------------" << endl;
            cout << "Ingrese una opción: ";
            cin >> opcionCola;

            switch (opcionCola) {
            case 1:
                int tamCola;
                cout << "Ingrese el tamaño de la cola: ";
                cin >> tamCola;
                cola.crear(tamCola);
                cout << "Cola creada correctamente." << endl;
                break;

            case 2:
                cola.insertar();
                if (cola.getaI()) {
                    cout << "Elemento insertado en la cola." << endl;
                }
                else {
                    cout << "No se puede insertar el elemento. Cola llena." << endl;
                }
                break;

            case 3:
                int elemEliminado = cola.eliminar();
                if (cola.getaI()) {
                    cout << "Elemento eliminado de la cola: " << elemEliminado << endl;
                }
                else {
                    cout << "No se puede eliminar elemento. Cola vacía." << endl;
                }
                break;

            case 4:
                int elemCola = cola.ver();
                if (elemCola != 0) {
                    cout << "Elemento en la cola: " << elemCola << endl;
                }
                else {
                    cout << "La cola está vacía." << endl;
                }
                break;

            case 0:
                break;

            default:
                cout << "Opción inválida. Intente nuevamente." << endl;
                break;
            }
            break;

        case 2:
            /*int opcionPila;
            cout << "------ Operaciones con Pilas ------" << endl;
            cout << "1. Crear Pila" << endl;
            cout << "2. Apilar elemento" << endl;
            cout << "3. Desapilar elemento" << endl;
            cout << "4. Ver elemento en la cima de la pila" << endl;
            cout << "0. Volver" << endl;
            cout << "-----------------------------------" << endl;
            cout << "Ingrese una opción: ";
            cin >> opcionPila;

            switch (opcionPila) {
            case 1:
                int tamPila;
                cout << "Ingrese el tamaño de la pila: ";
                cin >> tamPila;
                pila.crear(tamPila);
                cout << "Pila creada correctamente." << endl;
                break;

            case 2:
                int elemApilar;
                cout << "Ingrese el elemento a apilar: ";
                cin >> elemApilar;
                pila.apilar(elemApilar);
                if (pila.getaI()) {
                    cout << "Elemento apilado correctamente." << endl;
                }
                else {
                    cout << "No se puede apilar el elemento. Pila llena." << endl;
                }
                break;

            case 3:
                int elemDesapilado = pila.desapilar();
                if (pila.getaI()) {
                    cout << "Elemento desapilado: " << elemDesapilado << endl;
                }
                else {
                    cout << "No se puede desapilar elemento. Pila vacía." << endl;
                }
                break;

            case 4:
                int elemPila = pila.ver();
                if (elemPila != 0) {
                    cout << "Elemento en la cima de la pila: " << elemPila << endl;
                }
                else {
                    cout << "La pila está vacía." << endl;
                }
                break;

            case 0:
                break;

            default:
                cout << "Opción inválida. Intente nuevamente." << endl;
                break;
            }
            break;*/

        case 3:
           /* int opcionLista;
            cout << "------ Operaciones con Lista ------" << endl;
            cout << "1. Crear Lista" << endl;
            cout << "2. Insertar elemento" << endl;
            cout << "3. Eliminar elemento" << endl;
            cout << "4. Ver elemento al inicio de la lista" << endl;
            cout << "0. Volver" << endl;
            cout << "-----------------------------------" << endl;
            cout << "Ingrese una opción: ";
            cin >> opcionLista;

            switch (opcionLista) {
            case 1:
                int tamLista;
                cout << "Ingrese el tamaño de la lista: ";
                cin >> tamLista;
                lista.crear(tamLista);
                cout << "Lista creada correctamente." << endl;
                break;

            case 2:
                lista.insertar();
                if (lista.getaI()) {
                    cout << "Elemento insertado en la lista." << endl;
                }
                else {
                    cout << "No se puede insertar el elemento. Lista llena." << endl;
                }
                break;

            case 3:
                int elemEliminado = lista.eliminar();
                if (lista.getaI()) {
                    cout << "Elemento eliminado de la lista: " << elemEliminado << endl;
                }
                else {
                    cout << "No se puede eliminar elemento. Lista vacía." << endl;
                }
                break;

            case 4:
                int elemInicioLista = lista.ver();
                if (elemInicioLista != 0) {
                    cout << "Elemento al inicio de la lista: " << elemInicioLista << endl;
                }
                else {
                    cout << "La lista está vacía." << endl;
                }
                break;

            case 0:
                break;

            default:
                cout << "Opción inválida. Intente nuevamente." << endl;
                break;
            }
            break;*/

        case 0:
            cout << "Saliendo del programa..." << endl;
            break;

        default:
            cout << "Opción inválida. Intente nuevamente." << endl;
            break;
        }

    } while (opcion != 0);

    return 0;
}
