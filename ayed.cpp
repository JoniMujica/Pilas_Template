/*
Dada una pila y dos valores X e Y, desarrollar un procedimiento que reemplace cada valor igual a X que se encuentre en la pila por el valor Y retornando la pila modificada. En caso de no haber ningún valor igual a X retornar la pila sin cambio. (Definir parámetros y codificar).
*/
#include <iostream>
#include "funciones.h"

using namespace std;

template <typename T>
void mostrar_pila(Nodo<T>*&,int,int);
void perdir_valores(int&, int&);

int main() {
	Nodo<int>* Pila = NULL;
	int a, b;
	for (int i = 0; i < 10; i++)
	{
		Push(Pila, i);
	}
	Push(Pila, 3);
	Push(Pila, 7);
	Push(Pila, 7);
	Push(Pila, 1);
	
	perdir_valores(a, b);

	mostrar_pila(Pila, a, b);
	return 0;
}

void perdir_valores(int& val1, int& val2) {
	cout << "Ingrese el valor que desea reemplazar: " << endl;
	cin >> val1;
	cout << "Ingrese el valor la cual reemplazar: " << endl;
	cin >> val2;
}

template <typename T>
void mostrar_pila(Nodo<T>*& p, int x ,int y)
{
    Nodo<T>* aux = p;  // apunta al inicio de la lista 
    while (aux != NULL)
    {
		if (aux->info == x)
		{
			aux->info = y;
		}

		// Le doy estilo a los resultados de la piL
		if (aux->sig != NULL)
		{
			cout << aux->info << ",";
		}
		else
		{
			cout << aux->info;
		}
       
        aux = aux->sig;
    }
}