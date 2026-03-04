#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    double matematica, portugues, ciencias, media;

    cout << "Nota de Matematica: " << endl;
    cin >> matematica;

    cout << "Nota de Portugues: " << endl;
    cin >> portugues;

    cout << "Nota de Ciencia: " << endl;
    cin >> ciencias;

    media = (matematica + portugues + ciencias) / 3;

    // setprecision para limitar o numero gerado a 2 caracteres
    cout << "Media de Pedro: " << fixed << setprecision(2) << media << endl;

    return 0;
}