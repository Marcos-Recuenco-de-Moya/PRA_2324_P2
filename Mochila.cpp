#include <iostream>
#include <vector>

using namespace std;

int mochila(int M, int p[], int b[], int n, int vectorSol[]){
  vector<vector<int>> K(n + 1, vector<int>(M + 1));

  //Construir Matriz K[][]
  for(int i = 0; i <= n; i++){
    for(int j = 0; j <= M; j++){
      if(i == 0 || j == 0){     //si estas en la primera posicion mete un 0
        K[i][j] = 0;
      }
      else if(p[i - 1] <= j){   //si el peso anterior es menor o igual que columna j
        K[i][j] = max(b[i - 1] + K[i - 1][j - p[i - 1]], K[i - 1][j]);  //busca el maximo entre lo anterior calculado y el nuevo
      }
      else{
        K[i][j] = K[i - 1][j];  //si no mete el peso anterior 
      }
    }
  }

  int i=n;
  int j=M;
  while(i>0 || j!=0){
        if(K[i][j] > K[i-1][j]){
                vectorSol[i-1] = 1;
                j=j-p[i-1];
        }
        i--;
  }

  //Imprimir la Matriz K solucion
  for(int i = 0; i <= n; i++){
    for(int j = 0; j <= M; j++){
      cout << K[i][j] << "	";
    }
    cout << endl;
  }

  return K[n][M];
}


int main(){

  int p[] = {1,3,2,4};
  int b[] = {10,20,15,20};
  int M = 5;
  int n = sizeof(p) / sizeof(p[0]);
  int vectorSol[] = {0,0,0,0};
  int sol = mochila(M, p, b, n, vectorSol);
  cout << "El beneficio máximo es de: " << sol << endl;
  cout << "El vector solución es: ";
  cout << "[";
  for(int i=0 ; i<n ; i++){
          cout << vectorSol[i] << " , ";
  }
 cout << "]" << endl;

  return 0;
}


