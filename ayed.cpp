/*
Desarrollar un procedimiento que ingrese por teclado un conjunto de Apellidos y Nombre de alumnos y 
los imprima en orden inverso al de ingreso. (Definir parámetros y codificar).
*/
#include <iostream>
//#include "funciones.h"
#include <string.h>

using namespace std;
struct Personales
{
	char nombre[15];
	char apellido[20];
};

struct Nodo
{
	Personales datos;
	Nodo* sig;
};

void Push(Nodo*&, char[], char[]);
void Mostrar(Nodo*&);
Personales Pop(Nodo*&);

int main() {
	Nodo* Pila = NULL;
	char nom[15];
	char ap[20];
	char val;

	do
	{
	
		cout << "Ingrese el nombre: " << endl;
		cin.getline(nom, sizeof(nom));  // con cin.getline me permite guardar la cadena de caracteres con espacios limitando su maximo valor asignado n el char
		cout << "Ingrese el apellido: " << endl;
		cin.getline(ap, sizeof(ap));
		Push(Pila, nom, ap);

		
		cout << "¿desea continuar?" << endl;
		cin >> val;
		cin.clear();
		cin.ignore();


	} while (val == 's');

	Mostrar(Pila);

	/*
	while (Pila != NULL)
	{
		Personales val = Pop(Pila);
		cout << "=============DATOS PERSONALES==================" << endl;
		cout << val.apellido << endl;
		cout << val.nombre << endl;
	}
	*/
	return 0;
}

void Push(Nodo*& pila, char nom[], char ap[]) {
	cout << ap << endl;
	Nodo* nuevo_nodo = new Nodo();
	strcpy(nuevo_nodo->datos.nombre, nom);
	//cout << "se ingreso: " << nuevo_nodo->datos.nombre << endl;
	strcpy(nuevo_nodo->datos.apellido, ap);
	cout << "se ingreso: " << nuevo_nodo->datos.apellido << endl;
	nuevo_nodo->sig = pila;
	pila = nuevo_nodo;
}

void Mostrar(Nodo*& pila) {
	Nodo* aux = pila;
	while (aux != NULL)
	{
		cout << "=========================" << endl;
		cout << "Apellido: " << aux->datos.apellido << sizeof(aux->datos.apellido) << endl;
		cout << "Nombre: " << aux->datos.nombre  << sizeof(aux->datos.nombre) << endl;
		aux = aux->sig;
	}
}



Personales Pop(Nodo*& Pila) {
	Personales x;
	Nodo* aux = Pila;
	x = aux->datos;
	Pila = aux->sig;
	delete aux;
	return x;
}