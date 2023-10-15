// Hacer una calculadora simple

#include <iostream>
using namespace std;

int main()
{
    int numero1, numero2, resultado;
    char operacion;

    cout << "Ingrese el primer numero: ";
    cin >> numero1;

    cout << "Ingrese la operacion (+, -, *, /): ";
    cin >> operacion;

    cout << "Ingrese el segundo numero: ";
    cin >> numero2;

    switch (operacion)
    {
    case '+':
        resultado = numero1 + numero2;
        cout << "El resultado de la suma es: " << resultado << endl;
        break;
    case '-':
        resultado = numero1 - numero2;
        cout << "El resultado de la resta es: " << resultado << endl;
        break;
    case '*':
        resultado = numero1 * numero2;
        cout << "El resultado de la multiplicacion es: " << resultado << endl;
        break;
    case '/':
        resultado = numero1 / numero2;
        int residuo = numero1 % numero2;
        cout << "El resultado de la division es: " << resultado << endl;
        cout << "El residuo de la division es: " << residuo << endl;
        break;
    default:
        cout << "Operacion no valida. Por favor, ingrese una operacion valida." << endl;
        break;
    }

    return 0;
}
