#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int x, y, z, opc;

    cout << "1 - Media Geométrica" << endl;
    cout << "2 - Media Ponderada" << endl;
    cout << "3 - Media Harmônica" << endl;
    cout << "4 - Aritmética" << endl;
    cout << "Opção 1: ";
    cin >> opc;


    cout << "x: ";
    cin >> x;

    if (x < 0){
        cout << "Valor x invalido!" << endl;
        return 0;
    }

    cout << "y: ";
    cin >> y;

    if (y < 0){
        cout << "Valor de y invalido!" << endl;
        return 0;
    }

    cout << "z: ";
    cin >> z;

     if (z < 0){
        cout << "Valor de z invalido!" << endl;
        return 0;
    }

    switch(opc){
        case 1:
            cout << "Media geométrica: " << pow((x * y * z), 1/3) << endl;
            break;
        case 2:
            cout << "Media ponderada: " << (x + 2 * y + 3 * z) / 6 << endl;
            break;
        case 3:
            cout << "Media harmonica: " << 1 / ((1/x)+(1/y)+(1/z)) << endl;
            break;
        case 4:
            cout << "Media geométrica: " << (x + y + z) / 3 << endl;
            break;
        default:
            cout << "Opção inválida!" << endl;
    }

    return 0;
}