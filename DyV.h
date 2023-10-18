#include <iostream>
#include <vector>

using namespace std;

template <typename T> //con el template puede pasarte cualquier tipo de datos, sea int, char, etc.

int BusquedaBinaria(T X, vector<T>& V, int ini, int fin){
	if(ini>fin){
		cout << "No se encuentra en el array";
		return -1;
	}
	int medio = (ini + fin) / 2;
	if(V[medio] == X){
		return medio;
	}else if(V[medio] > X){
		return BusquedaBinaria(X, V, ini, medio-1);
	}else{
		return BusquedaBinaria(X, V, medio +1, fin);
	}
}
