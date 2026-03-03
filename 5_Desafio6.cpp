#include <iostream>
#include <iomanip>
using namespace std;

int main()

{
    int nota;
    cout << "Nota do aluno: " << endl;
    cin >> nota;

    switch (nota)
    {
    case 10:
        cout << "Conceito A" << endl;
        break;
    case 9:
        cout << "Conceito A" << endl;
        break;
    case 8:
        cout << "Conceito B" << endl;
        break;
    case 7:
        cout << "Conceito B" << endl;
        break;
    case 6:
        cout << "Conceito C" << endl;
        break;
    case 5:
        cout << "Conceito C" << endl;
        break;
    case 4:
        cout << "Conceito D" << endl;
        break;
    case 3:
        cout << "Conceito D" << endl;
        break;

    default:
        cout << "Conceito E" << endl;
        break;
    }

    return 0;
}