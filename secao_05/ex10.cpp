#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    char sexo[10];
    float altura;

    cout << "Sexo: (M -> masculino e F -> feminino) ";
    cin >> sexo;

    cout << "Altura: ";
    cin >> altura;

    if(sexo == "M"){
        cout << "Peso ideal: " << (72.7 * altura) - 58 << endl;
    }
    else {
        cout << "Peso ideal: " << (62.1 * altura) - 44.7 << endl;
    }

    return 0;
}