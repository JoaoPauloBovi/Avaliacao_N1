#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

    int nasc, idade;

    nasc = 2010;
    idade = 2026 - nasc;

    if (idade <= 17)
    {
        cout << "Voce tem " << idade << " anos nao pode votar" << endl;
    }
    else
    {
        cout << "Voce tem " << idade << " anos pode votar" << endl;
    }

    return 0;
}