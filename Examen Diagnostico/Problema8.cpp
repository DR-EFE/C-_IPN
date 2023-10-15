// Un hospital desea conocer las estadísticas de sus pacientes con covid, porcentaje de ninos (0 -11a),
// adolecentes (12a - 17a), adultos (18a - 60a) y adultos mayores (61a o mas),
//  porcentaje de mujeres y hombres , en un programa de c++

#include <iostream>
using namespace std;
// funcion para calcular el porcentaje
float calcularPorcentaje(float valor, float total)
{
    return 100.0 * valor / total;
}

int main()
{
    int n_pacientes;
    int ninos = 0, adolecentes = 0, adultos = 0, adultosMayores = 0;
    int hombres = 0, mujeres = 0;

    cout << "Ingrese el numero de pacientes: ";
    cin >> n_pacientes;

    for (int i = 1; i <= n_pacientes; i++)
    {
        int edad;
        char genero;

        cout << "Paciente #" << i << endl;
        cout << "Ingrese la edad: ";
        cin >> edad;

        cout << "Ingrese el genero (M/F): ";
        cin >> genero;

        if (edad >= 0 && edad <= 11)
        {
            ninos++;
        }
        else if (edad >= 12 && edad <= 17)
        {
            adolecentes++;
        }
        else if (edad >= 18 && edad <= 60)
        {
            adultos++;
        }
        else if (edad >= 61)
        {
            adultosMayores++;
        }

        if (genero == 'M' || genero == 'm')
        {
            hombres++;
        }
        else if (genero == 'F' || genero == 'f')
        {
            mujeres++;
        }
    }

    float porcentaje_ninos = calcularPorcentaje(ninos, n_pacientes);
    float porcentaje_adolecentes = calcularPorcentaje(adolecentes, n_pacientes);
    float porcentaje_adultos = calcularPorcentaje(adultos, n_pacientes);
    float porcentaje_adultosMayores = calcularPorcentaje(adultosMayores, n_pacientes);
    float porcentaje_hombres = calcularPorcentaje(hombres, n_pacientes);
    float porcentaje_mujeres = calcularPorcentaje(mujeres, n_pacientes);

    cout << "Estadisticas de pacientes con COVID-19" << endl;
    cout << "------------------------------------" << endl;
    cout << "Porcentaje de pacientes por edad:" << endl;
    cout << "- Ninos: " << porcentaje_ninos << "%" << endl;
    cout << "- Adolecentes: " << porcentaje_adolecentes << "%" << endl;
    cout << "- Adultos: " << porcentaje_adultos << "%" << endl;
    cout << "- Adultos mayores: " << porcentaje_adultosMayores << "%" << endl;
    cout << "------------------------------------" << endl;
    cout << "Porcentaje de pacientes por genero:" << endl;
    cout << "- Hombres: " << porcentaje_hombres << "%" << endl;
    cout << "- Mujeres: " << porcentaje_mujeres << "%" << endl;

    return 0;
}
