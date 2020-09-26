/*
Dada una pila y un valor I, desarrollar un procedimiento que elimine los 2 primeros nodos de la pila y deje el valor I 
como primero. (Definir parámetros y codificar).
*/
#include <iostream>
#include "funciones.h"

using namespace std;

template <typename T>
void Eliminar(Nodo<T>*&, T);

int main() {
	Nodo<int>* Pila = NULL;

	for (int i = 0; i < 10; i++)
	{
		Push(Pila, i);
	}
	Eliminar(Pila, 150);
	while (Pila != NULL)
	{
		cout << "Elementos de la pila: " << Pop(Pila) << endl;
	}
	return 0;
}


template <typename T>
void Eliminar(Nodo<T>*& Pila, T x) {
	for (int i = 0; i < 2; i++)
	{
		Pop(Pila);
	}
	Push(Pila, x);
	return;
}