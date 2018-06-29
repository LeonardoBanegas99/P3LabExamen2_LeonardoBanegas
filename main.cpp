#include <iostream>
#include <string>
#include "Nodo.h"
#include "Seleccion.h"

using namespace std;

int main()
{
    Nodo *NodoPrincipal = NULL;
    bool opcion = true;
    int op = 0;
    while (opcion)
    {
        cout << "---Menu---" << endl;
        cout << "1) Crear Seleccion" << endl;
        cout << "2) Visualizar Informacion" << endl;
        cout << "3) Editar Selecciones" << endl;
        cout << "4) Listados" << endl;
        cin >> op;
        switch (op)
        {
        case 1:
        {
            int opi = 0;
            cout << "---Menu Crear---" << endl;
            cout << "1) Crear al Final" << endl;
            cout << "2) Crear en posicion especifica" << endl;
            cin >> opi;
            if (opi == 1)
            {
                if (NodoPrincipal == NULL)
                {
                    cout << "Se creara primero el nodo principal" << endl;
                    string NombreSelec;
                    int PartidosGanados;
                    int PartidosPerdidos;
                    int PartidosEmpatados;
                    int GolesAnotados;
                    string MaxGoleador;
                    int numGoles;
                    cout << "Se creara el primer nodo" << endl;
                    cout << "Ingrese Nombre de Seleccion: " << endl;
                    cin >> NombreSelec;
                    cout << "Ingrese Numero de Partidos Ganados: " << endl;
                    cin >> PartidosGanados;
                    cout << "Ingrese Numero de Partidos Perdidos: " << endl;
                    cin >> PartidosPerdidos;
                    cout << "Ingrese Numero de Partidos Empatados: " << endl;
                    cin >> PartidosEmpatados;
                    cout << "Ingrese Numero de Goles Anotados: " << endl;
                    cin >> GolesAnotados;
                    cout << "Ingrese Nombre de Maximo Goleador: " << endl;
                    cin >> MaxGoleador;
                    cout << "Ingrese Numero de sus goles Anotados: " << endl;
                    cin >> numGoles;

                    Seleccion *selec = new Seleccion(NombreSelec, PartidosGanados, PartidosPerdidos,
                                                     PartidosEmpatados, GolesAnotados, MaxGoleador, numGoles);
                    cout << "hecho" << endl;
                    NodoPrincipal = new Nodo();
                    NodoPrincipal->setSeleccion(selec);
                    cout << "hecho" << endl;
                    NodoPrincipal->setSig(NULL);
                    cout << "hecho" << endl;
                }
                else
                {
                    string NombreSelec;
                    int PartidosGanados;
                    int PartidosPerdidos;
                    int PartidosEmpatados;
                    int GolesAnotados;
                    string MaxGoleador;
                    int numGoles;
                    cout << "Ingrese Nombre de Seleccion: " << endl;
                    cin >> NombreSelec;
                    cout << "Ingrese Numero de Partidos Ganados: " << endl;
                    cin >> PartidosGanados;
                    cout << "Ingrese Numero de Partidos Perdidos: " << endl;
                    cin >> PartidosPerdidos;
                    cout << "Ingrese Numero de Partidos Empatados: " << endl;
                    cin >> PartidosEmpatados;
                    cout << "Ingrese Numero de Goles Anotados: " << endl;
                    cin >> GolesAnotados;
                    cout << "Ingrese Nombre de Maximo Goleador: " << endl;
                    cin >> MaxGoleador;
                    cout << "Ingrese Numero de sus goles Anotados: " << endl;
                    cin >> numGoles;

                    Seleccion *selec = new Seleccion(NombreSelec, PartidosGanados, PartidosPerdidos,
                                                     PartidosEmpatados, GolesAnotados, MaxGoleador, numGoles);

                    Nodo *temp1 = new Nodo();
                    Nodo *temp2 = new Nodo();
                    temp1 = NodoPrincipal->getSig();
                    temp2 = NULL;
                    if (NodoPrincipal->getSig() == NULL)
                    {
                        cout << "hecho3" << endl;
                        Nodo *nodo = new Nodo(selec);
                        cout << "hecho3" << endl;
                        nodo->setSig(NULL);
                        cout << "hecho3" << endl;
                        NodoPrincipal->setSig(nodo);
                        cout << "hecho3" << endl;
                        //break;
                    }
                    do
                    {
                        if (temp1 != NULL)
                        {
                            cout << "hecho1" << endl;
                            temp2 = temp1->getSig();
                            cout << "hecho1" << endl;
                            temp1 = NULL;
                            cout << "hecho1" << endl;
                            if (temp2 == NULL)
                            {
                                Nodo *nodo = new Nodo(selec);
                                nodo->setSig(NULL);
                                temp2->setSig(nodo);
                                cout << "hecho" << endl;
                                break;
                            }
                        }
                        else if (temp2 != NULL)
                        {
                            cout << "hecho2" << endl;
                            temp1 = temp2->getSig();
                            cout << "hecho2" << endl;
                            temp2 = NULL;
                            if (temp1 == NULL)
                            {
                                Nodo *nodo = new Nodo(selec);
                                nodo->setSig(NULL);
                                temp1->setSig(nodo);
                                break;
                            }
                        }
                        else
                        {
                            break;
                        }
                    } while (true);
                    cout << "hecho4" << endl;
                }
            }
            else if (opi == 2)
            {
                int posi = -1;
                if (NodoPrincipal != NULL)
                {
                    Nodo *temp1 = NodoPrincipal->getSig();
                    Nodo *temp2 = NULL;
                    cout << "---Selecciones--" << endl;
                    cout << "1) " << NodoPrincipal->getSelec()->getNombreSelec() << endl;
                    int cont = 2;
                    do
                    {
                        if (temp1 != NULL)
                        {
                            cout << cont << ") " << temp1->getSelec()->getNombreSelec() << endl;
                            temp2 = temp1->getSig();
                            cont++;
                            temp1 = NULL;
                            if (temp2 == NULL)
                            {
                                break;
                            }
                        }
                        else if (temp2 != NULL)
                        {
                            cout << cont << ") " << temp2->getSelec()->getNombreSelec() << endl;
                            temp1 = temp2->getSig();
                            cont++;
                            temp2 = NULL;
                            if (temp1 == NULL)
                            {
                                break;
                            }
                        }
                    } while (true);
                    cout << "Seleccione nodo donde insertar nuevo nodo" << endl;
                    cin >> posi;
                }
                if (NodoPrincipal == NULL)
                {
                    cout << "Se creara primero el nodo principal" << endl;
                    string NombreSelec;
                    int PartidosGanados;
                    int PartidosPerdidos;
                    int PartidosEmpatados;
                    int GolesAnotados;
                    string MaxGoleador;
                    int numGoles;
                    cout << "Se creara el primer nodo" << endl;
                    cout << "Ingrese Nombre de Seleccion: " << endl;
                    cin >> NombreSelec;
                    cout << "Ingrese Numero de Partidos Ganados: " << endl;
                    cin >> PartidosGanados;
                    cout << "Ingrese Numero de Partidos Perdidos: " << endl;
                    cin >> PartidosPerdidos;
                    cout << "Ingrese Numero de Partidos Empatados: " << endl;
                    cin >> PartidosEmpatados;
                    cout << "Ingrese Numero de Goles Anotados: " << endl;
                    cin >> GolesAnotados;
                    cout << "Ingrese Nombre de Maximo Goleador: " << endl;
                    cin >> MaxGoleador;
                    cout << "Ingrese Numero de sus goles Anotados: " << endl;
                    cin >> numGoles;

                    Seleccion *selec = new Seleccion(NombreSelec, PartidosGanados, PartidosPerdidos,
                                                     PartidosEmpatados, GolesAnotados, MaxGoleador, numGoles);
                    NodoPrincipal = new Nodo();
                    NodoPrincipal->setSeleccion(selec);
                    NodoPrincipal->setSig(NULL);
                }
                else
                {
                    string NombreSelec;
                    int PartidosGanados;
                    int PartidosPerdidos;
                    int PartidosEmpatados;
                    int GolesAnotados;
                    string MaxGoleador;
                    int numGoles;
                    cout << "Se creara el primer nodo" << endl;
                    cout << "Ingrese Nombre de Seleccion: " << endl;
                    cin >> NombreSelec;
                    cout << "Ingrese Numero de Partidos Ganados: " << endl;
                    cin >> PartidosGanados;
                    cout << "Ingrese Numero de Partidos Perdidos: " << endl;
                    cin >> PartidosPerdidos;
                    cout << "Ingrese Numero de Partidos Empatados: " << endl;
                    cin >> PartidosEmpatados;
                    cout << "Ingrese Numero de Goles Anotados: " << endl;
                    cin >> GolesAnotados;
                    cout << "Ingrese Nombre de Maximo Goleador: " << endl;
                    cin >> MaxGoleador;
                    cout << "Ingrese Numero de sus goles Anotados: " << endl;
                    cin >> numGoles;

                    Seleccion *selec = new Seleccion(NombreSelec, PartidosGanados, PartidosPerdidos,
                                                     PartidosEmpatados, GolesAnotados, MaxGoleador, numGoles);

                    Nodo *temp1 = new Nodo();
                    Nodo *temp2 = new Nodo();
                    temp1 = NodoPrincipal->getSig();
                    temp2 = NULL;
                    if (posi == 2)
                    {
                    }
                    else
                    {
                        for (int i = 2; i < posi; i++)
                        {
                            if (i % 2 == 0)
                            {
                                temp2 = temp1->getSig();
                                temp1 = temp2->getSig();
                            }
                            else
                            {
                                temp1 = temp2->getSig();
                                temp2 = temp1->getSig();
                            }
                        }
                    }
                }
            }
            break;
        }
        case 2:
        {

            break;
        }
        case 3:
        {

            break;
        }
        case 4:
        {

            break;
        }
        }
    }
}