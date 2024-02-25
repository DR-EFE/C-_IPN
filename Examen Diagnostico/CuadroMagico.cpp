#include <iostream>
using namespace std;

void generarCuadradoMagico(int n) {
    int cuadrado[n][n];

    // Inicializar matriz con ceros
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cuadrado[i][j] = 0;
        }
    }

    // Colocar el número 1 en la celda central de la primera fila
    int i = 0;
    int j = n/2;
    cuadrado[i][j] = 1;

    // Llenar el cuadrado mágico
    for (int num = 2; num <= n*n; num++) {
        int i_ant = i;
        int j_ant = j;
        i--;
        j++;
        if (i < 0) {
            i = n-1;
        }
        if (j == n) {
            j = 0;
        }
        if (cuadrado[i][j] != 0) {
            i = i_ant + 1;
            j = j_ant;
        }
        cuadrado[i][j] = num;
    }

    // Imprimir el cuadrado mágico
    cout << "Cuadrado magico de " << n << "x" << n << ":" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << cuadrado[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Ingrese el tamaño del cuadrado magico (debe ser impar): ";
    cin >> n;

    generarCuadradoMagico(n);

    return 0;
}
