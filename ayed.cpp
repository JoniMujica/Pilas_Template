/*
Definir una funci�n INVERSA que eval�e dos conjuntos de caracteres separados por un punto y retorne True si los conjuntos son inversos 
(ej: ABcDe.eDcBA) o False si no lo son. Los conjuntos deben ingresarse por teclado. (Definir par�metros y codificar).
*/
#include <iostream>
#include "funciones.h"

using namespace std;
template <typename T>
void Ordenar(Nodo<T>*&, Nodo<T>*&);

int main() {
	Nodo<char>* Pila1 = NULL;
	Nodo<char>* Pila2 = NULL;
	Ordenar(Pila1, Pila2);

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
