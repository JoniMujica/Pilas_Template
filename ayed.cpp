/*
Dada una pila y un valor I, desarrollar un procedimiento que inserte I como tercer valor de la pila. (Definir 
parámetros y codificar).
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
	T vec[3];
	for (int i = 0; i < 3; i++)
	{
		vec[i] = Pop(Pila);
	}
	Push(Pila, x);
	Push(Pila, vec[1]);
	Push(Pila, vec[0]);
	return;
}