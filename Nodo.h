#ifndef NODO_H
#define NODO_H

#include "Seleccion.h"
#include <iostream>
#include <string>

using namespace std;

class Nodo{
    private:
        Seleccion* selec;
        Nodo* selecSIG;
    public:
        Nodo();
        Nodo(Seleccion*);
        Nodo(Nodo*);
        
        Seleccion* getSelec();
        Nodo* getSig();

        void setSeleccion(Seleccion*);
        void setSig(Nodo*);

};
#endif