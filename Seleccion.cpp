#include <iostream>
#include <string>
#include "Seleccion.h"

using namespace std;

Seleccion::Seleccion()
{
}

Seleccion::Seleccion(string a, int b,
                     int c, int d,
                     int e, string f, int g)
{
    NombreSelec = a;
    PartidosGanados = b;
    PartidosPerdidos = c;
    PartidosEmpatados = d;
    GolesAnotados = e;
    MaxGoleador = f;
    numGoles = g;
}

string Seleccion::getNombreSelec(){
    return NombreSelec;
}
int Seleccion::getPartidosGanados(){
    return PartidosGanados;
}
int Seleccion::getPartidosPerdidos(){
    return PartidosPerdidos;
}
int Seleccion::getPartidosEmpatados(){
    return PartidosEmpatados;
}
int Seleccion::getGolesAnotados(){
    return GolesAnotados;
}
string Seleccion::getMaxGoleador(){
    return MaxGoleador;
}
int Seleccion::getnumGoles(){
    return numGoles;
}

void Seleccion::setNombreSelec(string s){
    NombreSelec = s;
}
void Seleccion::setPartidosGanados(int i){
    PartidosGanados = i;
}
void Seleccion::setPartidosPerdidos(int i){
    PartidosPerdidos = i;
}
void Seleccion::setPartidosEmpatados(int i){
    PartidosEmpatados = i;
}
void Seleccion::setGolesAnotados(int i){
    GolesAnotados = i;
}
void Seleccion::setMaxGoleador(string s){
    MaxGoleador = s;
}
void Seleccion::setnumGoles(int i){
    numGoles = i;
}
