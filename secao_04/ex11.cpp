#include <iostream>

using namespace std;

int main(){
    float ms;

    cout << "Velocidade em M/s: ";
    cin >> ms;

    cout << "Velocidade em KM/s: " << ms * 3.6 << endl;

    return 0;
}