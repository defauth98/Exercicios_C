#include <iostream>

using namespace std;

int main(){
    int saque, nota_100, nota_50, nota_20, nota_10, nota_5, nota_2,nota_1;

    cout << "Valor do saque: ";
    cin >> saque;

    nota_100 =  saque / 100;
    nota_50 =  (saque % 100) / 50;
    nota_20 = ((saque % 100) %50) / 20;
    nota_10 = (((saque % 100) % 50) % 20) / 10;
    nota_5 = ((((saque % 100) % 50) % 20) % 10) / 5;
    nota_2 = (((((saque % 100) % 50) % 20) % 10) % 5) / 2;
    nota_1 = ((((((saque % 100) % 50) % 20) % 10) % 5) % 2) / 1;

    cout << "Notas de 100 -> " << nota_100 << endl;
    cout << "Notas de 50 -> " << nota_50 << endl;
    cout << "Notas de 20 -> " << nota_20 << endl;
    cout << "Notas de 10 -> " << nota_10 << endl;
    cout << "Notas de 5 -> " << nota_5 << endl;
    cout << "Notas de 2 -> " << nota_2 << endl;
    cout << "Notas de 1 -> " << nota_1 << endl;
    return 0;
}