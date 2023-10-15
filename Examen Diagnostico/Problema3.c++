#include <iostream>
#include <vector>

using namespace std;

int buscar_en_arreglo(const vector<int> &arreglo, int numero_buscado)
{
    for (int i = 0; i < arreglo.size(); i++)
    {
        if (arreglo[i] == numero_buscado)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int> arreglo = {1, 2, 5, 10, 15, 20, 25};
    int numero_buscado;

    cout << "Ingrese el numero que desea buscar: ";
    cin >> numero_buscado;

    int posicion = buscar_en_arreglo(arreglo, numero_buscado);

    if (posicion != -1)
    {
        cout << "El numero " << numero_buscado << " se encuentra en la posicion " << posicion << endl;
    }
    else
    {
        cout << "El numero " << numero_buscado << " no se encuentra en el arreglo" << endl;
    }

    return 0;
}