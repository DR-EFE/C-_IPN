
// Una clasificación de las personas de acuerdo a sus años de nacimientos es , baby boomers (1946 a 1964),
//  generación X  (1965 a 1980) generación Y o milenial ( 1981 a  1996) y generacion z o centenial (1997 a 2010).

#include <iostream>
using namespace std;

int main()
{
    int ahos;
    cout << "Ingrese su año de nacimiento: ";
    cin >> ahos;

    if (ahos >= 1946 && ahos <= 1964)
    {
        cout << "Usted pertenece a la generacion baby boomer." << endl;
    }
    else if (ahos >= 1965 && ahos <= 1980)
    {
        cout << "Usted pertenece a la generacion X." << endl;
    }
    else if (ahos >= 1981 && ahos <= 1996)
    {
        cout << "Usted pertenece a la generacion Y o millennial." << endl;
    }
    else if (ahos >= 1997 && ahos <= 2010)
    {
        cout << "Usted pertenece a la generacion Z o centennial." << endl;
    }
    else
    {
        cout << "No tenemos ninguna generacion con la fecha ingresada" << endl;
    }
    return 0;
}
