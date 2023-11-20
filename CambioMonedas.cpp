#include <iostream>
#include <vector>
#include <string>

using namespace std;

int devolver_monedas(vector<int>& v, vector<int>& sol, int vuelta, int tam){
        int tabla[tam + 1][vuelta + 1] = {-1};
        tabla[0][0] = 0;
        for(int j = 1; j < vuelta + 1; j++){
                if(j >= v[0] && tabla[0][j - v[0]] != -1){
                       tabla[0][j] = 1 + tabla[0][j - v[0]];
                }
        }
        for(int i = 1; i < 3; i++){
                tabla[i][0] = 0;
                for(int j = 1; j < vuelta + 1; j++){
                        if(j < v[i] || tabla[i][j - v[i]] == -1){
                                tabla[i][j] = tabla[i - 1][j];
                        }
                        else if(tabla[i - 1][j] != 0){
                                tabla[i][j] = min(tabla[i - 1][j], 1 + tabla[i][j - v[i]]);
                        }
                        else{
                                tabla[i][j] = 1 + tabla[i][j - v[i]];
                        }
                }
        }
        for(int i = 0; i < tam; i++){
                for(int j = 0; j < vuelta + 1; j++){
                        cout << tabla[i][j] << " ";
                }
                cout << endl;
        }
        int i = tam - 1;
        int j = vuelta;
        while(i >= 0 && j != 0){
                if(i == 0 || tabla[i][j] != tabla[i - 1][j]){
                        sol[i] = sol[i] + 1;
                        j = j - v[i];
                }
                else{
                        i--;
                }
        }
        return tabla[tam - 1][vuelta];
}

int main(){
        vector<int>v = {1, 4, 6};
        cout << "Monedas disponibles: 1, 4, 6;" << endl;
        vector<int>sol = {0, 0, 0};
        cout << "Cantidad a devolver: 8" << endl;
        int res = devolver_monedas(v, sol, 8, 3);
        cout << "La cantidad de monedas a devolver es: " << res << endl;
        cout << "Vector solución: ";
        for(int i = 0; i < 3; i++){
                cout << sol[i] << " ";
        }
        cout << endl;
        return 0;
}




