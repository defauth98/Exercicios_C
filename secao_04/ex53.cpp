#include <iostream>

using namespace std;

int main(){
    float comprimento, largura, metro_tela;

    cout << "Comprimento: ";
    cin >> comprimento;

    cout << "Largura: ";
    cin >> largura;

    cout << "Metro da tela: ";
    cin >> metro_tela;

    cout << "Custo: " << (comprimento * largura) / metro_tela << endl;
     
    return 0;
}