#include <iostream>

using namespace std;

int main(){
    float valor, comissao;

    cout << "Valor: ";
    cin >> valor;

    if ( valor >= 100000){
        comissao = 700 + (valor * 16 / 100);
    }
    else if ((valor < 100000) && (valor >= 80000)){
        comissao = 650 + (valor * 14 / 100);
    }
    else if ((valor < 80000) && (valor >= 60000)){
        comissao = 600 + (valor * 14 / 100);
    }
    else if ((valor < 60000) && (valor >= 40000)){
        comissao = 550 + (valor * 14 / 100);
    }
    else if ((valor < 40000) && (valor >= 20000)){
        comissao = 500 + (valor * 14 / 100);
    }
    else if (valor < 20000){
        comissao = 400 + (valor * 14 / 100);
    }

    cout << "Valor da comissão -> " << comissao << endl;
    
    return 0;
}