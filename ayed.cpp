/*
Idem ejercicio 60 pero retornando un par�metro con valor 'S' o 'N' seg�n haya sido exitoso o no el requerimiento. 
(Definir par�metros y codificar).
*/
#include <iostream>
#include "funciones.h"

using namespace std;

template <typename T>
char modificar(Nodo<T>*&);

int main() {
	Nodo<int>* Pila = NULL;

	for (int i = 0; i < 10; i++)
	{
		Push(Pila, i);
	}
	char res = modificar(Pila);
	cout << "Resultado de la pila: " << res << endl;
	return 0;
}
template <typename T>
char modificar(Nodo<T>*& pila) {
	for (int i = 0; i < 3; i++)
	{
		if (pila != NULL)
			Pop(pila);
		else return 'N';
	}
	return 'S';
}