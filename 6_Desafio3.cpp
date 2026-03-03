#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{

    double raio, pi, area;
    cout << "Qual o Raio: " << endl;
    cin >> raio;

    pi = 3.14159;

    // formula A = pi.r2
    area = pi * pow(raio, 2);

    cout << "A area do quintal de Joao e de " << fixed << setprecision(2) << area << endl;

    return 0;
}