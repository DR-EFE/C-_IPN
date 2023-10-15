#include <iostream>
using namespace std;

// Función para convertir de Fahrenheit a Celsius
float fahrenheitACelsius(float fahrenheit)
{
    float celsius = (fahrenheit - 32) * 5 / 9;
    return celsius;
}

// Función para convertir de Kelvin a Celsius
float kelvinACelsius(float kelvin)
{
    float celsius = kelvin - 273.15;
    return celsius;
}

// Función para calcular el perímetro de un círculo
float perimetroCirculo(float radio)
{
    float perimetro = 2 * 3.1416 * radio;
    return perimetro;
}

// Función para calcular el Area de un círculo
float AreaCirculo(float radio)
{
    float Area = 3.1416 * (radio * radio);
    return Area;
}

// Función para calcular el perímetro de un rectángulo
float perimetroRectangulo(float base, float altura)
{
    float perimetro = 2 * (base + altura);
    return perimetro;
}

// Función para calcular el área de un rectángulo
float areaRectangulo(float base, float altura)
{
    float area = base * altura;
    return area;
}

// Función para mostrar el menú y obtener la opción del usuario
int showMenu()
{
    int option;
    cout << "¿Que desea calcular?" << endl;
    cout << "1. Fahrenheit a Celsius" << endl;
    cout << "2. Kelvin a Celsius" << endl;
    cout << "3. Perimetro de un circulo" << endl;
    cout << "4. Perimetro de un rectangulo" << endl;
    cout << "5. Area de un rectangulo" << endl;
    cout << "6. Area de un circulo" << endl;
    cout << "Ingrese la opcion deseada: ";
    cin >> option;
    return option;
}

int main()
{
    int option;
    float value1, value2, result;

    option = showMenu();

    switch (option)
    {
    case 1:
        cout << "Ingrese el valor en Fahrenheit: ";
        cin >> value1;
        result = fahrenheitACelsius(value1);
        cout << "El valor en Celsius es: " << result << endl;
        break;
    case 2:
        cout << "Ingrese el valor en Kelvin: ";
        cin >> value1;
        result = kelvinACelsius(value1);
        cout << "El valor en Celsius es: " << result << endl;
        break;
    case 3:
        cout << "Ingrese el radio del circulo: ";
        cin >> value1;
        result = perimetroCirculo(value1);
        cout << "El perimetro del cIrculo es: " << result << endl;
        break;
    case 4:
        cout << "Ingrese la longitud del rectangulo: ";
        cin >> value1;
        cout << "Ingrese la anchura del rectangulo: ";
        cin >> value2;
        result = perimetroRectangulo(value1, value2);
        cout << "El perimetro del rectangulo es: " << result << endl;
        break;
    case 5:
        cout << "Ingrese la longitud del rectangulo: ";
        cin >> value1;
        cout << "Ingrese la anchura del rectangulo: ";
        cin >> value2;
        result = areaRectangulo(value1, value2);
        cout << "El area del rectangulo es: " << result << endl;
        break;
    case 6:
        cout << "Ingrese el radio del circulo: ";
        cin >> value1;
        result = AreaCirculo(value1);
        cout << "El area del circulo es :" << result << endl;
        break;
    default:
        cout << "Opción invalida." << endl;
        break;
    }

    return 0;
}