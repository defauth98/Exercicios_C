#include <iostream>

using namespace std;

int main(){
    float valor_produto;

    cout << "Valor do produto: ";
    cin >> valor_produto;

    cout << "Com desconto de 12 por cento: " << valor_produto - (valor_produto * 12 / 100) << endl;
    
    return 0;
}