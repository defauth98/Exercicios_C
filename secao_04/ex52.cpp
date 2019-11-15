#include <iostream>

using namespace std;

int main(){
    float valor_um, valor_dois, valor_tres, valor_premio,total_investido;

    cout << "Valor do premio: ";
    cin >> valor_premio;

    cout << "Valor investido do primeiro jogador: ";
    cin >> valor_um;

    cout << "Valor investido do segundo jogador: ";
    cin >> valor_dois;

    cout << "Valor investido do terceiro jogador: ";
    cin >> valor_tres;


    total_investido = valor_um + valor_dois + valor_tres;

    cout << "Valor do primeiro: " << (valor_um * 100 / total_investido) * 100 / valor_premio << endl;

    cout << "Valor do segundo: " << (valor_dois * 100 / total_investido) * 100 / valor_premio << endl;

    cout << "Valor do terceiro: " << (valor_tres * 100 / total_investido)  * 100 / valor_premio << endl;
    
    return 0;
}