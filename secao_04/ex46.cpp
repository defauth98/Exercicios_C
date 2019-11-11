#include <iostream>

using namespace std;

int main(){
    int num, cifra;

    cout << "Numero: ";
    cin >> num;

    do {
        cifra = num % 10;
        cout << cifra;
        num /= 10;
    } while (num != 0);

    cout << endl;

    return 0;
}