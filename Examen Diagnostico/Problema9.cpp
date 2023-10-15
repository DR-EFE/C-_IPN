// funcion que calcule la longitud de una cadena

#include <iostream>
#include <cstring>

using namespace std;

int calcularLongitudCadena(char cadena[])
{
    int longitud = strlen(cadena);

    return longitud;
}

int main()
{
    char cadena[100]; // se tiene que definir la variable con una longitud maxima

    cout << "Ingrese una palabra o una cadena de caracteres para calcular su tamano  ";
    cin >> cadena;

    cout << "La longitud de la cadena ingresada es :" << calcularLongitudCadena(cadena) << endl;

    return 0;
}