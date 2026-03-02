#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double Celsius, Fahrenheit;

    Celsius = 32.0;

    Fahrenheit = (Celsius * 1.8) + 32;
    cout << " A conversao final foi: " << fixed << setprecision(2) << Fahrenheit << " Fahrenheit" << endl;

    return 0;
}