// resuelve la formula cuadrática
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c, x1, x2;

    cout << "Ingrese el valor de a: ";
    cin >> a;

    cout << "Ingrese el valor de b: ";
    cin >> b;

    cout << "Ingrese el valor de c: ";
    cin >> c;

    double discriminante = b * b - 4 * a * c;

    if (discriminante > 0)
    {
        x1 = (-b + sqrt(discriminante)) / (2 * a);
        x2 = (-b - sqrt(discriminante)) / (2 * a);

        cout << "Las raices son: " << x1 << " y " << x2 << endl;
    }
    else if (discriminante == 0)
    {
        x1 = -b / (2 * a);

        cout << "La raiz doble es: " << x1 << endl;
    }
    else
    {
        cout << "No hay solucion real." << endl;
    }

    return 0;
}
