#include <iostream>

using namespace std;

int main(){
    float cel;

    cout << "Temperatura em celcius: ";
    cin >> cel;

    cout << "Temperatura em kelvin: " << cel + 273.15 << endl;

    return 0;
}