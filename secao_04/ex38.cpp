#include <iostream>

using namespace std;

int main(){
    float valor_salario;

    cout << "Valor atual do salario: ";
    cin >> valor_salario;

    cout << "Valor atual: " << valor_salario + ( valor_salario * 25 / 100) << endl;
    
    return 0;
}