#include <iostream>
using namespace std;

const int MAX = 100;

// Función que verifica si la matriz es simétrica
bool esSimetrica(int mat[MAX][MAX], int filas, int columnas) {
    // Verificar si el número de filas y columnas es el mismo
    if (filas != columnas) {
        return false;
    }

    // Verificar si la matriz es simétrica
    for (int i = 0; i < filas; i++) {
        for (int j = i+1; j < columnas; j++) {
            if (mat[i][j] != mat[j][i]) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    int mat[MAX][MAX];
    int filas, columnas;

    // Pedir al usuario el número de filas y columnas de la matriz
    cout << "Ingrese el numero de filas: ";
    cin >> filas;
    cout << "Ingrese el numero de columnas: ";
    cin >> columnas;

    // Pedir al usuario los elementos de la matriz
    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cin >> mat[i][j];
        }
    }

    // Verificar si la matriz es simétrica e imprimir el resultado
    if (esSimetrica(mat, filas, columnas)) {
        cout << "La matriz es simetrica." << endl;
    } else {
        cout << "La matriz no es simetrica." << endl;
    }

    return 0;
}
