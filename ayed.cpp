/*
Definir una función INVERSA que evalúe dos conjuntos de caracteres separados por un punto y retorne True si los conjuntos son inversos 
(ej: ABcDe.eDcBA) o False si no lo son. Los conjuntos deben ingresarse por teclado. (Definir parámetros y codificar).
*/

/**/
#include <iostream>
#include "funciones.h"

using namespace std;
template <typename T>
void Ordenar(Nodo<T>*&, Nodo<T>*&);
template <typename T>
bool Inversa(Nodo<T>*&, Nodo<T>*&);
template <typename T>
void Mostrar_Pila(Nodo<T>*&);

int main() {
	Nodo<char>* Pila1 = NULL;
	Nodo<char>* Pila2 = NULL;
	Ordenar(Pila1, Pila2);
	Mostrar_Pila(Pila1);
	Mostrar_Pila(Pila2);
	/*
	if (Inversa(Pila1, Pila2) == false) {
		cout << "El valor es falso" << endl;
	}
	else
	{
		cout << "El valor es verdadero" << endl;
	} */

	Inversa(Pila1, Pila2) ? cout << "La inversa es verdadera!" << endl : cout << "La inversa es falsa!" << endl;

	return 0;
}
template <typename T>
void Ordenar(Nodo<T>*& Pila1, Nodo<T>*& Pila2) {
	char val;
	int contador = 0;
	do //utilizo 'do' por que almenos una vez se tiene que introducir un valor
	{
		cout << "Ingrese un valor: " << endl;
		cin >> val;
		if (val != '.')
		{
			Push(Pila1, val);
			cout << "================== Agrego el valor a Pila 1 ================" << endl;
			contador++; //incremento la variable para utilizarlo en el for
		}

	} while (val != '.');
	for (int i = 0; i < contador; i++)
	{
		cout << "Ingrese un valor: " << endl;
		cin >> val;
		if (val != '.')
		{
			Push(Pila2, val);
			cout << "================== Agrego el valor a Pila 2 ================" << endl;
		}
	}
}

template <typename T>
bool Inversa(Nodo<T>*& Pila1, Nodo<T>*& Pila2) {
	char dat;
	Nodo<T>* aux1 = Pila1;
	Nodo<T>* aux2 = Pila2;
	while (aux1 != NULL && aux2 != NULL)
	{
		dat = Pop(aux1);
		if (dat == aux2->info)
			return true;
		aux2 = aux2->sig;
	}
	return false;
}
template <typename T>
void Mostrar_Pila(Nodo<T>*& Pila) {
	Nodo<T>* aux = Pila;

	while (aux != NULL)
	{
		if (aux->sig != NULL)
		{
			cout << aux->info;
		}
		else
		{
			cout << aux->info << endl;
		}
		
		aux = aux->sig;
	}
}