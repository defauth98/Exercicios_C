#include <iostream>

using namespace std;

int main(){
    float litro;

    cout << "Litros: ";
    cin >> litro;

    cout << "metros cubicos: " << litro /  1000 << endl;

    return 0;
}