#pragma once
template <typename T>
struct Nodo
{
	T info;
	Nodo<T>* sig;
};

template <typename T>
void Push(Nodo <T>*& Pila, T x) { //paso 'Pila' como referencia y 'T' como dato generico
	Nodo<T>* p = new Nodo<T>(); //creo espacio en memoria
	p->info = x; // le asigno al nuevo nodo la info P
	p->sig = Pila; //Le asigno al nuevo nodo el puntero siguiente
	Pila = p; // //actualizar el puntero al inicio
	return;
}

template <typename T>
T Pop(Nodo<T>*& Pila) { //le paso 'Pila' como parametro referido
	T x;	//creo una variable temporal generica
	Nodo<T>* temp = Pila; // creo un nodo temporal y lo igualo a la pila referida
	x = temp->info;	// saco la info del nodo temporal y lo igualo a X
	Pila = temp->sig;	//pila apunta al siguiente nodo
	delete temp; //elmino el nodo temporal
	return x; //retorno X
}