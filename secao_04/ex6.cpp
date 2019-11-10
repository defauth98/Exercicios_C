#include <iostream>

using namespace std;

int main(){
    float cel;

    cout << "Temperatura em celcius: ";
    cin >> cel;

    cout << "Temperatura em fahrenheit: " << cel * (9 / 5) + 32 << endl;
    
    return 0;
}