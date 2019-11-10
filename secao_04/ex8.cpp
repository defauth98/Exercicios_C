#include <iostream>

using namespace std;

int main(){
    float kel;

    cout << "Temperatura em kelvin: ";
    cin >> kel;

    cout << "Temperatura em celcius: " << kel - 273.15 << endl;
    
    return 0;
}