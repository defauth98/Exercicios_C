#include <iostream>

using namespace std;

int main(){ 
    int limite, quant_linhas = 1, numero_impresso=1;

    cout << "Número: ";
    cin >> limite;

    for(int c = 1; c <= limite; c++){
        for(int n = 1; n <= quant_linhas; n++ ){
            cout << numero_impresso << " ";
            numero_impresso++;
        }
        quant_linhas++;

        cout << endl;
    }

    
    return 0;
}