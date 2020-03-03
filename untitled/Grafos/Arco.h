#include "Nodo.h"
#include <malloc.h>

#ifndef UNTITLED_ARCO_H
#define UNTITLED_ARCO_H

using namespace std;

class Arco{

public:
    Arco(int size, Nodo nodo);

    int getsize();
    void setsize(int size);

private:
    int size;
    Nodo *nodoPtr=(Nodo*) malloc(sizeof(int));;
    Nodo nodo;
};


#endif //UNTITLED_ARCO_H
