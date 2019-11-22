#include <iostream>

using namespace std;

int main(){
    float valor;
    string estado;

    cout << "Valor: ";
    cin >> valor;

    cout << "Estado(mg, sp, rj, ms): ";
    cin >> estado;

    cout << estado << endl;

    if (estado == "mg"){
        cout << "Valor final do produto -> " << valor + (valor * 7 / 100) << endl;
    }
    else if (estado == "sp"){
        cout << "Valor final do produto -> " << valor + (valor * 12 / 100) << endl;
    }
    else if(estado == "rj"){
        cout << "Valor final do produto -> " << valor + (valor * 15 / 100) << endl;
    }
    else if(estado == "ms"){
        cout << "Valor final do produto -> " << valor + (valor * 8 / 100) << endl;
    }
    else{
        cout << "Estado inválido!" << endl;
    }

    return 0;
}