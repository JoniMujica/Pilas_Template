/*
Dada una pila y un valor I, desarrollar un procedimiento que elimine los 2 primeros nodos de la pila y deje el valor I 
como primero. (Definir parámetros y codificar).
*/
#include <iostream>
#include "funciones.h"

using namespace std;

template <typename T>
void Convertir(Nodo<T>*&, Nodo<T>*&);
template <typename T>
bool Verificar(Nodo<T>*&, Nodo<T>*&);
template <typename T>
void Mostrar_Pila(Nodo<T>*&);

int main() {
	Nodo<char>* Pila1 = NULL;
	Nodo<char>* Pila2 = NULL;

	Convertir(Pila1, Pila2);

	cout << "================>>>PILA 1<<<========================" << endl;
	Mostrar_Pila(Pila1);
	Mostrar_Pila(Pila2);

	if (Verificar(Pila1, Pila2) == false) {
		cout << "El valor es falso" << endl;
	}
	else
	{
		cout << "El valor es verdadero" << endl;
	}
	return 0;
}
template <typename T>
void Convertir(Nodo<T>*& pila1, Nodo<T>*& pila2) {
	char val;
	int contador = 0;
	do
	{
		cout << "Ingrese un valor" << endl;
		cin >> val;
		if (val != '.')
		{
			Push(pila1, val);
			cout << "===================Valor Agregador a pila 1==============" << endl;
			contador++;
		}
		
	} while (val != '.');

	for (int i = 0; i < contador; i++)
	{
		cout << "Ingrese un valor" << endl;
		cin >> val;
		if (val != '.')
		{
			Push(pila2, val);
			cout << "===================Valor Agregador a pila 2==============" << endl;
		}
	}
}

template <typename T>
bool Verificar(Nodo<T>*& pila1 , Nodo<T>*& pila2) {
	char dat;
	Nodo<T>* aux1 = pila1;
	Nodo<T>*aux2 = pila2;
	while (aux1 != NULL && aux2 != NULL)
	{
		dat = Pop(aux1);
		if (dat == aux2->info)
			return true;
	}
	return false;
}

template <typename T>
void Mostrar_Pila(Nodo<T>*& pila) {
	Nodo<T>* Puntero_P = pila;

	while (Puntero_P != NULL)
	{
		cout << Puntero_P->info;
		Puntero_P = Puntero_P->sig;
	}
}