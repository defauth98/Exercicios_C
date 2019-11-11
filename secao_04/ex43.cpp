#include <iostream>

using namespace std;

int main(){
    float valor;

    cout << "Valor: ";
    cin >> valor;

    cout << "Total a pagar com desconto de 10 por cento --> " << valor - ( valor * 10 / 100) << endl;

    cout << "Valor da parcela (em 3x) --> " << valor / 3 << endl;

    cout << "Comissao do vencedor ( A vista ) --> " << (valor - ( valor * 10 / 100)) * 5 / 100 << endl;

    cout << "Comissao do vendedor ( Parcelado ) --> " << valor * 5 / 100 << endl;

    return 0;
}