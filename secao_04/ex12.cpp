#include <iostream>

using namespace std;

int main(){
    float milhas;

    cout << "Velocidade em milhas: ";
    cin >> milhas;

    cout << "Velocidade em quilometros: " << 1.61 * milhas << endl;

    return 0;
}