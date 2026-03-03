#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

    int nasc, idade;

    cout << "Ano que o eleitor nasceu: " << endl;
    cin >> nasc;

    idade = 2026 - nasc;

    if (idade <= 17)
    {
        cout << "O eleitor tem " << idade << " anos nao e pode votar" << endl;
    }
    else
    {
        cout << "O eleitor tem " << idade << " anos e pode votar" << endl;
    }

    return 0;
}