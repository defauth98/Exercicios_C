#include <iostream>

using namespace std;

int main(){
    float rad;

    cout << "Radianos: ";
    cin >> rad;

    cout << "Graus: " << ( rad * 180 ) / 3.14 << endl;

    return 0;
}