#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    
    int quant_acerto=0, quant_erro=0;

    for (int c=1; c <= 5;c++ ){
        int num1, num2, resultado;

        num1 = rand() % 100;
        num2 = rand() % 100;

        cout << "Quando é " << num1 << " + " << num2 << ": ";
        cin >> resultado;

        if (resultado == (num1 + num2)){
            quant_acerto++;
        }
        else{
            quant_erro++;
        }
    }

    cout << endl;

    cout << "Você acertou " << quant_acerto << " vezes" << endl;
    cout << "Você errou " << quant_erro << " vezes" << endl;

    return 0;
}