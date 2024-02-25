#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de terminos de la serie de Fibonacci que desea calcular: ";
    cin >> n;

    int a = 0, b = 1, c;
    cout << "La serie de Fibonacci de " << n << " terminos es: ";
    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
