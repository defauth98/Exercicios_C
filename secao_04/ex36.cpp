#include <iostream>

using namespace std;

int main(){
    float raio, altura;

    cout << "Raio: ";
    cin >> raio;

    cout << "Altura: ";
    cin >> altura;

    cout << "Volume: " << 3.14 * (raio * raio) * altura << endl;
    
    return 0;
}