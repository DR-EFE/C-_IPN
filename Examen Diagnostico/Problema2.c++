// Solicitar al usuario 20 numeros enteros y almacena en un arreglo los pares y en otro los nones.

#include <iostream>
using namespace std;

int main()
{
    int numeros[20];
    int pares[20];
    int impares[20];
    int contador_pares = 0;
    int contador_impares = 0;

    // Solicitar los números enteros al usuario y guardarlos en el arreglo 'numeros'
    for (int i = 0; i < 20; i++)
    {
        cout << "Ingresa el numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    // Separar los números pares e impares en arreglos diferentes
    for (int i = 0; i < 20; i++)
    {
        if (numeros[i] % 2 == 0)
        {
            pares[contador_pares] = numeros[i];
            contador_pares++;
        }
        else
        {
            impares[contador_impares] = numeros[i];
            contador_impares++;
        }
    }

    // Mostrar en la pantalla los arreglos de números pares e impares
    cout << "Numeros pares: ";
    for (int i = 0; i < contador_pares; i++)
    {
        cout << pares[i] << " ";
    }
    cout << endl;

    cout << "Numeros impares: ";
    for (int i = 0; i < contador_impares; i++)
    {
        cout << impares[i] << " ";
    }
    cout << endl;

    return 0;
}