#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

    double dias, horas, valorh, calculo, salario;

    cout << "Dias trabalhados: " << endl;
    cin >> dias;

    cout << "Horas trabalhos por dia: " << endl;
    cin >> horas;

    cout << "Valor da hora trabalhada: " << endl;
    cin >> valorh;

    calculo = (dias * horas);
    salario = calculo * valorh;

    // setprecision para limitar o numero gerado a 2 caracteres
    cout << "Ana recebera R$ " << fixed << setprecision(2) << salario << " reais de salario" << endl;

    return 0;
}