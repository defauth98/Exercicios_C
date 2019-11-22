#include <iostream>
#include <math.h>

using namespace std;

int main(){
    float a, b, c,delta,resultado;

    cout << "Valor de A: ";
    cin >> a;

    cout << "Valor de B: ";
    cin >> b;

    cout << "Valor de C: ";
    cin >> c;

    cout << endl;
    
    delta = (b * b) - 4 * a * c;
    cout << "Delta igual a -> " << delta << endl;

    if (delta < 0){
        cout << "Não existe raiz real" << endl;
    }
    else if(delta == 0){
        cout  << "Raiz unica: " << (-b)/( 2 * a) << endl;
    }
    else if(delta > 0){
        resultado =  (-b + sqrt(delta))/(2 * a);
        cout << "Raiz 1: " << resultado << endl;
        cout << "Raiz 2: " << -resultado << endl;
    }
    else{
        cout << "Erro" << endl;
    }

    return 0;
}