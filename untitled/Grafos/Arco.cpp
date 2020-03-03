#include "Arco.h"

Arco::Arco(int size, Nodo nodo) : size(size), nodo(nodo) {
    Arco::nodoPtr = &nodo;
}

int Arco::getsize() {
    return Arco::size;
}

void Arco::setsize(int size) {
    Arco::size = size;
}