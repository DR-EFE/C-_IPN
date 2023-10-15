// Una nutriologa  desea llevar el control de sus pacientes, calcula el IMC (kg/m^2) e indicar
// a estos si tiene bajo peso (< 18.5), pero normal (18.5 a 24.9), sobre peso ( 25 a 29.9) u obesidad ( igual o mayor que 30 ), a los pacientes
// se les solicitara los siguientes datos: nombre, edad, sexo, peso y estatura  .

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Declaración de variables
    string nombre;
    int edad;
    char sexo;
    float peso, estatura, imc;

    // Pedir datos al usuario
    cout << "Ingrese el nombre del paciente: ";
    getline(cin, nombre);
    cout << "Ingrese la edad del paciente: ";
    cin >> edad;
    cout << "Ingrese el sexo del paciente (M/F): ";
    cin >> sexo;
    cout << "Ingrese el peso del paciente en kg: ";
    cin >> peso;
    cout << "Ingrese la estatura del paciente en metros: ";
    cin >> estatura;

    // Cálculo del IMC
    imc = peso / (estatura * estatura);

    // Mostrar resultados
    cout << endl
         << "Resultados para el paciente " << nombre << ":" << endl;
    cout << "Edad: " << edad << " ahos" << endl;
    cout << "Sexo: " << sexo << endl;
    cout << "Peso: " << peso << " kg" << endl;
    cout << "Estatura: " << estatura << " m" << endl;
    cout << "IMC: " << imc << endl;

    // Interpretación del IMC
    if (imc < 18.5)
    {
        cout << "El paciente tiene bajo peso" << endl;
    }
    else if (imc >= 18.5 && imc <= 24.9)
    {
        cout << "El paciente tiene un peso normal" << endl;
    }
    else if (imc >= 25 && imc <= 29.9)
    {
        cout << "El paciente tiene sobrepeso" << endl;
    }
    else
    {
        cout << "El paciente tiene obesidad" << endl;
    }

    return 0;
}
