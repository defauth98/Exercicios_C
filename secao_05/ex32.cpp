#include <iostream>

using namespace std;

int main(){
    int codigo,quant;

    cout << "Especificação   " << " Código  " << "Preço" << endl << endl;
    cout << "Cachorro quente " << "    100  " << " 1.20" << endl;
    cout << "Bauru simples   " << "    101  " << " 1.30" << endl;
    cout << "Bauru com ovo   " << "    102  " << " 1.50" << endl;
    cout << "Hamburguer      " << "    103  " << " 1.20" << endl;
    cout << "Cheeseburguer   " << "    104  " << " 1.70" << endl;
    cout << "Suco            " << "    105  " << " 2.20" << endl;
    cout << "Refrigerante    " << "    106  " << " 1.00" << endl << endl;

    cout << "Codigo do produto: ";
    cin >> codigo;

    cout << "Quantidade: ";
    cin >> quant;

    switch(codigo){
        case 100:
            cout << "Valor -> " << quant * 1.20 << endl;
            break;
        case 101:
            cout << "Valor -> " << quant * 1.30 << endl;
            break;
        case 102:
            cout << "Valor -> " << quant * 1.50 << endl;
            break;
        case 103:
            cout << "Valor -> " << quant * 1.20 << endl;
            break;
        case 104:
            cout << "Valor -> " << quant * 1.70 << endl;
            break;
        case 105:
            cout << "Valor -> " << quant * 2.20 << endl;
            break;
        case 106:
            cout << "Valor -> " << quant * 1.00 << endl;
            break;
        default:
            cout << "Código inválido!" << endl;
            break;
    }

    return 0;
}