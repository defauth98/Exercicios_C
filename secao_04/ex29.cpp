#include <iostream>

using namespace std;

int main(){
    float nota1, nota2, nota3, nota4;

    cout << "Nota 1: ";
    cin >> nota1;

    cout << "Nota 2: ";
    cin >> nota2;

    cout << "Nota 3: ";
    cin >> nota3;

    cout << "Nota 4: ";
    cin >> nota4;

    cout << "Media dos valores: " << (nota1 + nota2 + nota3 + nota4) / 4 << endl;
    return 0;
}