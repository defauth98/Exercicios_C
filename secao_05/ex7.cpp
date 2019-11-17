#include <iostream>

using namespace std;

int main(){
    int num1, num2;

    cout << "Numero 1: ";
    cin >> num1;

    cout << "Numero 2: ";
    cin >> num2;

    if (num1 == num2){
        cout << "Numero iguais" << endl;
    }
    else if (num1 > num2) {
        cout << "O numero 1 e o maior" << endl;
    }
    else {
        cout << "O numero 2 e o maior" << endl;
    }

    return 0;
}