#ifndef SELECCION_H
#define SELECCION_H

#include <string>
using namespace std;

class Seleccion{
    private:
        
        string NombreSelec;
        int PartidosGanados;
        int PartidosPerdidos;
        int PartidosEmpatados;
        int GolesAnotados;
        string MaxGoleador;
        int numGoles;

    public:

        Seleccion();
        Seleccion(string,int,int,int,int,string,int);
        string getNombreSelec();
        int getPartidosGanados();
        int getPartidosPerdidos();
        int getPartidosEmpatados();
        int getGolesAnotados();
        string getMaxGoleador();
        int getnumGoles();

        void setNombreSelec(string);
        void setPartidosGanados(int);
        void setPartidosPerdidos(int);
        void setPartidosEmpatados(int);
        void setGolesAnotados(int);
        void setMaxGoleador(string);
        void setnumGoles(int);

};
#endif