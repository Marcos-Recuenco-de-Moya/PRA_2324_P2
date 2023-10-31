#include <iostream>
#include <vector>
#include "DyV.h"
#include <chrono>

using namespace std;

int main(){


	auto start = chrono::system_clock::now();

	
	cout << "************BÚSQUEDA BINARIA************" << endl << endl;

        vector<int> Vint{1,2,3,4,5,6,7,8,9};
	cout << "Búsqueda del número 7 en posición: " << BusquedaBinaria(7,Vint,0,8) << endl;
        cout << "Búsqueda del número -3 en posición: " << BusquedaBinaria(-3, Vint, 0, 8) << endl;

        vector<char> Vchar{'a','b','c','d','e','f','g','h','i'};
	cout << "Búsqueda del carácter 'c' en posición: " << BusquedaBinaria('c',Vchar,0,8) << endl;
        cout << "Búsqueda del carácter 'z' en posición: " << BusquedaBinaria('z', Vchar, 0, 8) << endl;

        vector<double> Vdouble{1.2,2.6,3.9,4.1,5.0,6.9,7.3,8.4,9.7};
	cout << "Búsqueda del número 9.7 en posición: " << BusquedaBinaria(9.7,Vdouble,0,8) << endl;
        cout << "Búsqueda del número 3.6 en posición: " << BusquedaBinaria(3.6, Vdouble, 0, 8) << endl;


	cout << endl;
	cout << "************BÚSQUEDA BINARIA INVERSA************" << endl << endl;

	vector<int> VintINV{9,8,7,6,5,4,3,2,1};
        cout << "Búsqueda del número 5 en posición: " << BusquedaBinariaINV(5,VintINV,0,8) << endl;
        cout << "Búsqueda del número -3 en posición: " << BusquedaBinariaINV(-3, VintINV, 0, 8) << endl;

        vector<char> VcharINV{'i','h','g','f','e','d','c','b','a'};
        cout << "Búsqueda del carácter 'c' en posición: " << BusquedaBinariaINV('c',VcharINV,0,8) << endl;
        cout << "Búsqueda del carácter 'z' en posición: " << BusquedaBinariaINV('z', VcharINV, 0, 8) << endl;

        vector<double> VdoubleINV{9.7,8.4,7.3,6.9,5.0,4.1,3.9,2.6,1.2};
        cout << "Búsqueda del número 8.4 en posición: " << BusquedaBinariaINV(8.4,VdoubleINV,0,8) << endl;
        cout << "Búsqueda del número 3.6 en posición: " << BusquedaBinariaINV(3.6, VdoubleINV, 0, 8) << endl;


	cout << endl;
	cout << "************QUICK SORT************" << endl << endl;
	vector<int> Vintquick{2,8,3,0,4,2,7,1,5,8,6};
	quicksort(Vintquick,0,10);
	cout << "[ - ";
	for(int i=0 ; i<11 ; i++){
		cout << Vintquick[i] << " - ";
	}
	cout << "]" << endl;


	vector<char> Vcharquick{'c','g','i','f','d','a','h','e','b'};
        quicksort(Vcharquick,0,8);
	cout << "[ - ";
        for(int i=0 ; i<9 ; i++){
                cout << Vcharquick[i] << " - ";
        }
        cout << "]" << endl;

	vector<double> Vdoublequick{7.3,2.6,9.7,1.2,4.1,5.0,6.9,8.4,3.9};
        quicksort(Vdoublequick,0,8);
	cout << "[ - ";
        for(int i=0 ; i<9 ; i++){
                cout << Vdoublequick[i] << " - ";
        }
        cout << "]" << endl;
	cout << endl;

	cout << "----------TIEMPO DE EJECUCIÓN----------" << endl;

	auto end = chrono::system_clock::now();

	chrono::duration<float, milli> duration = end - start;
	cout << "Tiempo: " << duration.count() << "s" << endl;

	cout << endl;


     return 0;
}


