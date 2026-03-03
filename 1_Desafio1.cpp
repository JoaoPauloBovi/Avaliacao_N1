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

    cout << "Media de Pedro: " << fixed << setprecision(2) << media << endl;

    return 0;
}