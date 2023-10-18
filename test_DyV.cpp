#include <iostream>
#include <vector>
#include "DyV.h"

using namespace std;

int main(){

	vector<int> Vint{1,2,3,4,5,6,7,8,9};
	int resultado1 = BusquedaBinaria(7,Vint,0,8);
	if(resultado1 = -1){
	       cout << "El número no se ha encontrado en el vector\n";
        }else{
               cout << "El numero se ha encontrado en la posición: " << resultado1 << "\n";
	}	       

	int resultado2 = BusquedaBinaria(-3,Vint,0,8);
	if(resultado2 = -1){
               cout << "El número no se ha encontrado en el vector\n";  
        }else{
               cout << "El numero se ha encontrado en la posición: " << resultado2 << "\n";
	}

	vector<char> Vchar{'a','b','c','d','e','f','g','h','i'};
	int resultado3 = BusquedaBinaria('b',Vchar,0,8);
	if(resultado3 = -1){
               cout << "El caracter no se ha encontrado en el vector\n"; 
        }else{
               cout << "El caracter se ha encontrado en la posición: " << resultado3 << "\n";
	}

	int resultado4 = BusquedaBinaria('z',Vchar,0,8);
	if(resultado4 = -1){
               cout << "El caracter no se ha encontrado en el vector\n";
        }else{
               cout << "El caracter se ha encontrado en la posición: " << resultado4 << "\n";
	}

     return 0;
}
