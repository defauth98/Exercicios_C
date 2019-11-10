#include <iostream>

using namespace std;

int main(){
    float km;

    cout << "Velocidade em quilometros: ";
    cin >> km;

    cout << "Velocidade em milhas: " << km / 1.61 << endl;

    return 0;
}