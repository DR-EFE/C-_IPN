#include <iostream>

using namespace std;

int main() {
  int n = 5;
  int matriz[n][n];

  // Inicializa la matriz con ceros
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      matriz[i][j] = 0;
    }
  }

  // Llena la diagonal principal con unos
  for(int i = 0; i < n; i++) {
    matriz[i][i] = 1;
  }

  // Imprime la matriz de identidad
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cout << matriz[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
