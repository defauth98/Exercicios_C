#include <iostream>

using namespace std;

int main(){
    float custo_fab, custo_consumidor;

    cout << "Custo de fabrica: ";
    cin >> custo_fab;

    if ( custo_fab > 12000){
        custo_consumidor = custo_fab + ( custo_fab * 5 / 100);
    }
    else if ((custo_fab >= 12000)&&(custo_fab <= 25000)){
        custo_consumidor = custo_fab + ( custo_fab * 10 / 100) + (custo_fab * 15 / 100);
    }
    else if(custo_fab > 25000){
        custo_fab = custo_fab + ( custo_fab * 15 / 100) + (custo_fab * 20 / 100);
    }

    cout << "Custo para o consumidor: " << custo_consumidor << endl;
    
    return 0;
}