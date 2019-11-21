#include <iostream>

using namespace std;

int main(){
    float valor;
    char estado[20];

    cout << "Valor: ";
    cin >> valor;

    cout << "Estado(MG, SP, RJ, MS): ";
    cin >> estado;

    if (estado == "MG"){
        cout << "Valor final do produto -> " << valor + (valor * 100 / 7) << endl;
    }
    else if (estado == "SP"){
        cout << "Valor final do produto -> " << valor + (valor * 100 / 12) << endl;
    }
    else if(estado == "RJ"){
        cout << "Valor final do produto -> " << valor +  ( valor * 100 / 15) << endl;
    }
    else if(estado == "MS"){
        cout << "Valor final do produto -> " << valor + (valor * 100 / 8) << endl;
    }
    else{
        cout << "Estado inválido!" << endl;
    }

    return 0;
}