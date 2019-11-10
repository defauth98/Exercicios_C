#include <iostream>

using namespace std;

int main(){
    float km;

    cout << "Velocidade em KM/h: ";
    cin >> km;

    cout << "Velocidade em M/s: " << km / 3.6 << endl;
    
    return 0;
}