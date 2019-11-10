#include <iostream>

using namespace std;

int main(){
    float real, cot_dolar;

    cout << "Valor em real: ";
    cin >> real;

    cout << "Cotacao do dolar: ";
    cin >> cot_dolar;

    cout << "Dolar: " << real / cot_dolar << endl;

    return 0;
}