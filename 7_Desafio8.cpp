#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    double triangulo1, triangulo2, triangulo3;

    cout << "Digita o valor do Triango 1: ";
    cin >> triangulo1;

    cout << "Digita o valor do Triango 2: ";
    cin >> triangulo2;

    cout << "Digita o valor do Triango 3: ";
    cin >> triangulo3;

    // Calculo: (a+b > c) E (a+c > b) E (b+c > a)
    if ((triangulo1 + triangulo2 > triangulo3) &&
        (triangulo1 + triangulo3 > triangulo2) &&
        (triangulo2 + triangulo3 > triangulo1))
    {
        cout << "E um triangulo" << endl;
    }
    else
    {
        cout << "Nao e um triangulo" << endl;
    }

    return 0;
}