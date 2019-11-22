#include <iostream>

using namespace std;

int main(){
    float km , litros_gaso,km_litro;

    cout << "Quilometros rodados: ";
    cin >> km;

    cout << "Litros de gasolina consumidos: ";
    cin >> litros_gaso;

    km_litro = km / litros_gaso;

    cout << km_litro << endl;

    if (km_litro <= 8){
        cout << "Venda o carro!" << endl;
    }
    else if((km_litro >= 8) && (km_litro <= 12)){
        cout << "Economico!" << endl;
    }
    else if(km_litro > 12){
        cout << "Super economico!" << endl;
    }

    return 0;
}