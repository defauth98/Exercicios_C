#include <iostream>

using namespace std;

int main(){
    float peso, altura, imc;

    cout << "Peso: ";
    cin >> peso;

    cout << "Altura: ";
    cin >> altura;

    imc = peso / (altura * altura);

    if (peso < 18.5){
        cout << "Abaixo do peso" << endl;
    }
    else if((peso >= 18.6) && (peso <=24.9)){
        cout << "Saudável" << endl;
    }
    else if((peso >= 25) && (peso <=29.9)){
        cout << "Peso em execesso" << endl;
    }
    else if((peso >= 30) && (peso <= 34.9)){
        cout << "Obesidade grau 1" << endl;
    }
    else if((peso >= 35) && (peso <=39.9)){
        cout << "Obesidade grau 2" << endl;
    }
    else if(peso >= 40){
        cout << "Obesidade grau 3" << endl;
    }

    return 0;
}