/*
Dada una pila y dos valores X e I, desarrollar un procedimiento que inserte el valor X en la posición I de la pila si es 
posible. (Definir parámetros y codificar).
*/
#include <iostream>
#include "funciones.h"

using namespace std;

template <typename T>
void Posicionar(Nodo<T>*& pila, T, int );

int main() {
	Nodo<int>* Pila = NULL;

	for (int i = 0; i < 10; i++)
	{
		Push(Pila, i);
	}

	int a, b;
	cout << "Ingrese un valor: " << endl;
	cin >> a;
	cout << "Ingrese la posicion: " << endl;
	cin >> b;
	Posicionar(Pila, a, b);

	while (Pila != NULL)
	{
		cout << "Elementos de la pila: " << Pop(Pila) << endl;
	}
	return 0;
}

template <typename T>
void Posicionar(Nodo<T>*& pila, T dat, int pos) {
	Nodo<int>* aux = NULL;
	int contador = 0;
	while (pila != NULL && (contador < pos - 1))
	{
		T x = Pop(pila);
		Push(aux, x);
		contador++;
	}
	
	Push(pila, dat);
	while (aux != NULL)
	{
		T x = Pop(aux);
		Push(pila, x);
	}
}