#include <iostream>

using namespace std;

int main(){
    float num1, num2, num3;

    cout << "Numero 1: ";
    cin >> num1;

    cout << "Numero 2: ";
    cin >> num2;

    cout << "Numero 3: ";
    cin >> num3;

    cout << "A soma dos quadrados dos numeros lidos: " << (num1 * num1) + (num2 * num2) + (num3 * num3) << endl;

    return 0;
}