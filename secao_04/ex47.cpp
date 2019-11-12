#include <iostream>

using namespace std;

int main(){
    int num, cifra;

    cout << "Numero: ";
    cin >> num;

    cout << num / 1000 << endl;
    cout << (num % 1000) / 100 << endl;
    cout << ((num % 1000) % 100) / 10 << endl;
    cout << num % 10 << endl;
}