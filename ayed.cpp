/*
Dada una pila y un valor X, desarrollar un procedimiento que inserte el valor X en la última posición de la pila y la retorne. 
(Definir parámetros y codificar).
*/
#include <iostream>
#include "funciones.h"

using namespace std;

template <typename T>
void ModificarVal(Nodo<T>*&, Nodo<T>*&, T);
template <typename T>
void Imprimir(Nodo<T>*&);

int main() {
	Nodo<int>* Pila = NULL;
	Nodo<int>* aux = NULL;

	for (int i = 0; i < 10; i++)
	{
		Push(Pila, i);
	}
	int a;
	cout << "INgrese un elemento a la pila: " << endl;
	cin >> a;

	ModificarVal(Pila, aux, a);
	Imprimir(Pila);
	return 0;
}

template <typename T>
void ModificarVal(Nodo<T>*& pila, Nodo<T>*& aux, T val) {

	while (pila != NULL)
	{
		T valor = Pop(pila);
		Push(aux, valor);
	}
	Push(pila, val);
	while (aux != NULL)
	{
		T valor = Pop(aux);
		Push(pila, valor);
	}
}
template <typename T>
void Imprimir(Nodo<T>*& pila) {
	while (pila != NULL)
	{
		T var = Pop(pila);
		cout << "Elementos de la pila: " << var << endl;
	}
}