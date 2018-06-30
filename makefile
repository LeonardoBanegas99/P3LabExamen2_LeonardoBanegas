exe:	main.o Nodo.o Seleccion.o 
	g++ main.o Nodo.o Seleccion.o -o exe
main.o:	main.cpp Nodo.h Seleccion.h
	g++ -c main.cpp
Nodo.o:	Nodo.cpp Nodo.h Seleccion.h
	g++ -c Nodo.cpp
Seleccion.o:	Seleccion.cpp Seleccion.h
	g++ -c Seleccion.cpp
