#include <iostream>
#include <math.h> 

using namespace std;

int main(){
    float num;

    cout << "Numero: ";
    cin >> num;

    if (num > 0) {
        cout << "Numero ao quadrado: " << num * num << endl;
        cout << "Raiz quadrada: " << sqrt(num) << endl; 
    }
    else {
        cout << "O numero digitado é negativo" << endl;
    }
    
    return 0;
}