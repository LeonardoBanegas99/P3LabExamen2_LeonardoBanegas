#include <iostream>
#include <string>
#include "Seleccion.h"
#include "Nodo.h"

using namespace std;

Nodo::Nodo(){

}

Nodo::Nodo(Seleccion* sel){
    this->selec = sel;
}

Nodo::Nodo(Nodo* n){
    this->selecSIG = n; 
}

Seleccion* Nodo::getSelec(){
    return selec;
}

Nodo* Nodo::getSig(){
    return selecSIG;
}

void Nodo::setSeleccion(Seleccion* sel){
    this->selec = sel;
}

void Nodo::setSig(Nodo* n){
    this->selecSIG = n;
}