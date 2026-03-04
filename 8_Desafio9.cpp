#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int numero, i;

    cout << "Escolha o numero da tabuada: ";
    cin >> numero;

    cout << "---- Tabuada de multiplicacao de " << numero << " ----" << endl;
    cout << endl;

    for (i = 0; i <= 10; i++)
    {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }

    return 0;
}
