#include <iostream>

using namespace std;

int main(){
    float centi;

    cout << "Centimetros: ";
    cin >> centi;

    cout << "Polegadas: " << centi /  2.54 << endl;

    return 0;
}