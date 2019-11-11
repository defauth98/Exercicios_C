#include <iostream>

using namespace std;

int main(){
    int dias_trab;

    cout << "Dia trabalhados: ";
    cin >> dias_trab;

    cout << "Total a pagar: " << dias_trab * 30 - ((dias_trab * 30) * 8 / 100) << endl;

    return 0;
}