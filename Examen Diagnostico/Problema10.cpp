// Dada una palabra indica cuentas vocales tiene en total y cuantas de c/u
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char palabra[50];
    int num_vocales = 0, num_a = 0, num_e = 0, num_i = 0, num_o = 0, num_u = 0;

    cout << "Ingrese una palabra: ";
    cin >> palabra;

    int longitud = strlen(palabra);
    for (int i = 0; i < longitud; i++)
    {
        char letra = tolower(palabra[i]); // convertir letra a minúscula para comparar con las vocales
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
        {
            num_vocales++;
            switch (letra)
            {
            case 'a':
                num_a++;
                break;
            case 'e':
                num_e++;
                break;
            case 'i':
                num_i++;
                break;
            case 'o':
                num_o++;
                break;
            case 'u':
                num_u++;
                break;
            }
        }
    }

    cout << "La palabra tiene " << num_vocales << " vocales en total." << endl;
    cout << "Número de a's: " << num_a << endl;
    cout << "Número de e's: " << num_e << endl;
    cout << "Número de i's: " << num_i << endl;
    cout << "Número de o's: " << num_o << endl;
    cout << "Número de u's: " << num_u << endl;

    return 0;
}
