#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    double mat, port, cie, media;

    mat = 9.0;
    port = 9.5;
    cie = 8.9;

    media = (mat + port + cie) / 3;

    cout << "Media de Pedro: " << fixed << setprecision(2) << media << endl;

    return 0;
}