#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

    double dias, horas, valorh, calculo, salario;

    dias = 23;
    horas = 8;
    valorh = 18.75;

    calculo = (dias * horas);
    salario = calculo * valorh;

    cout << "Ana recebera R$ " << fixed << setprecision(2) << salario <<" reais de salario" << endl;

    return 0;
}