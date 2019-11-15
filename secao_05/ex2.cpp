#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int num;

    cout << "Digite um numero: ";
    cin >> num;

    if (num > 0){
        cout << "Raiz quadrada: " << sqrt(num) << endl;
    } else {
        cout << "Numero invalido!" << endl;
    }
    return 0;
}