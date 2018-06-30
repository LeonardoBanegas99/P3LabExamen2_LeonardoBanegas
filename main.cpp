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
        cout << "2) Visualizar Informacion //En creacion" << endl;
        cout << "3) Eliminar Selecciones" << endl;
        cout << "4) Listar Nodos" << endl;
        cout << "5) Salir" << endl;
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
                        Nodo *nodo = new Nodo(selec);
                        nodo->setSig(NULL);
                        NodoPrincipal->setSig(nodo);
                        break;
                    }
                    do
                    {
                        if (temp1 != NULL)
                        {
                            temp2 = temp1->getSig();
                            if (temp2 == NULL)
                            {
                                Nodo *nodo = new Nodo(selec);
                                nodo->setSig(NULL);
                                temp1->setSig(nodo);
                                temp1 = NULL;
                                break;
                            }
                            temp1 = NULL;
                        }
                        else if (temp2 != NULL)
                        {
                            temp1 = temp2->getSig();
                            if (temp1 == NULL)
                            {
                                Nodo *nodo = new Nodo(selec);
                                nodo->setSig(NULL);
                                temp2->setSig(nodo);
                                temp2 = NULL;
                                break;
                            }
                            temp2 = NULL;
                        }
                        else
                        {
                            break;
                        }
                    } while (true);
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
                    while (posi == 1 || posi == cont)
                    {
                        cout << "Elija posiciones de en medio" << endl;
                        cout << "Seleccione nodo donde insertar nuevo nodo" << endl;
                        cin >> posi;
                    }
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
                        Nodo *te = new Nodo(selec);
                        NodoPrincipal->setSig(te);
                        te->setSig(temp1);
                    }
                    else
                    {
                        for (int i = 2; i < posi; i++)
                        {
                            if (i % 2 == 0)
                            {
                                temp2 = temp1->getSig();
                                temp1 = temp2->getSig();
                                if (i = posi)
                                {
                                    Nodo *te = new Nodo(selec);
                                    temp2->setSig(te);
                                    te->setSig(temp1);
                                }
                            }
                            else
                            {
                                temp1 = temp2->getSig();
                                temp2 = temp1->getSig();
                                if (i == posi)
                                {
                                    Nodo *te = new Nodo(selec);
                                    temp1->setSig(te);
                                    te->setSig(temp2);
                                }
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
                cout << "Seleccione nodo donde eliminar nuevo nodo" << endl;
                cin >> posi;
                while (posi == 1 || posi == cont)
                {
                    cout << "Elija posiciones de en medio" << endl;
                    cout << "Seleccione nodo donde insertar nuevo nodo" << endl;
                    cin >> posi;
                }
                Nodo *temp10 = new Nodo();
                Nodo *temp20 = new Nodo();
                Nodo *temp30 = new Nodo();
                temp10 = NodoPrincipal;
                temp20 = NULL;
                temp30 = NULL;

                for (int i = 1; i < posi; i++)
                {
                    if (posi == 2)
                    {
                        temp20 = temp10->getSig(); //2
                        temp30 = temp20->getSig(); //3
                        temp10->setSig(temp30);    //1 y 3
                        break;
                    }
                    if (i == posi - 1)
                    {
                        temp30 = temp10; //2 o anterior 3

                        temp20 = temp10->getSig(); //3 o altual 4

                        temp10 = temp20->getSig(); //4 o siguiente 5

                        temp30->setSig(temp10); //2 y 4 o 3 y 5

                        break;
                    }
                    else
                    {
                        temp20 = temp10->getSig();
                        temp10 = temp20;
                    }
                }

                cout << "Borrado" << endl;
            
            }
            break;
        }
        case 4:
        {
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
            }
            break;
        }
        case 5:{
            opcion = false;
            break;
        }
        }
    }
}