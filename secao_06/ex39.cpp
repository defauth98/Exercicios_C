#include <iostream>

using namespace std;



int main(int argc, char *argv[]){
    int base, altura;

    cout << "Base: ";
    cin >> base;

    if (base <= 0)
        return 0;

    cout << "Altura: ";
    cin >> altura;

    if (base <= 0)
        return 0;

    cout << "Area do triangulo -> " << base * altura / 2;
    
    return 0;
}