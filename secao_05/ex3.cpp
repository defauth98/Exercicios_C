#include <iostream>
#include <math.h>

using namespace std;

int main(){
    float num;

    cout << "Numero: ";
    cin >> num;

    if ( num > 0) {
        cout << "Raiz quadrada: " << sqrt(num) << endl;
    }
    else {
        cout << "Numero elevado ao quadrado: " << num * num << endl;
    }

    return 0;
}