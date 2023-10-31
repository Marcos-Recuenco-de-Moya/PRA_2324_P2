#include <iostream>
#include <vector>

using namespace std;

template <typename T> //con el template puede pasarte cualquier tipo de datos, sea int, char, etc.

int BusquedaBinaria(T X, vector<T>& V, int ini, int fin){
	if(ini>fin){
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


template <typename T>

int BusquedaBinariaINV(T X, vector<T>& V, int ini, int fin){
        if(ini>fin){
                return -1;
        }
        int medio = (ini + fin) / 2;
        if(V[medio] == X){
                return medio;
        }else if(V[medio] > X){
                return BusquedaBinaria(X, V, medio+1, fin);
        }else{
                return BusquedaBinaria(X, V, ini, medio-1);
        }
}

/*
template <typename T>

int Partition(vector<T>& V, int ini, int fin){
	T x = V[fin];
	int i = ini;
	for(int j=ini ; j<fin-1 ; i++){
		if( V[j] <= x){
			T aux = V[i];
			V[j] = V[i];
			V[i] = aux;
		}
		T aux2 = V[i];
		V[fin] = V[i];
		V[i] = aux2;
	}
	return i;
}


template <typename T>

void QuickSort(vector<T>& V, int ini, int fin){

	if(ini < fin){
		int pivot = Partition(V, ini, fin);
		QuickSort(V, ini, pivot - 1);
		QuickSort(V, pivot + 1, fin);
	}	
}
*/








template <typename T>

void quicksort(vector<T>& A,int ini,int fin)
{
    int i,j;
    double pivote;
    pivote=A[(ini+fin)/2];
    i=ini;
    j=fin;
    do
        {
            while(A[i]<pivote) i++;
            while(A[j]>pivote) j--;
            if(i<=j)
            {
                double temp;
                temp=A[i];
                A[i]=A[j]; /*intercambia A[i] con A[j] */
                A[j]=temp;
                i++;
                j--;
            }
        }
    
    while(i<=j);
    if(ini<j)
        quicksort(A,ini,j); /*mismo proceso con sublista izquierda*/
    if(i<fin)
        quicksort(A,i,fin); /*mismo proceso con sublista derecha*/
}






