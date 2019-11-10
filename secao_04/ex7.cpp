#include <iostream>

using namespace std;

int main(){
    float fah;

    cout << "Temperatura em fahrenheit: ";
    cin >> fah;

    cout << "Temperatura em celcius: " << 5.0 * (fah - 32.0) / 9.0 << endl ;

    return 0;
}