#include <iostream>

using namespace std;

int main(){
    int valor = 7800000;

    cout << "Primeiro vencedor: " << valor * 46 / 100 << endl;

    cout << "Segundo vencedor: " << valor * 32 /100 << endl;

    cout << "Terceiro vencedor: " << valor - (valor * 46 / 100) - (valor * 32 / 100) << endl;
    
    return 0;
}