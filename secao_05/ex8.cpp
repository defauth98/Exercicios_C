#include <iostream>

using namespace std;

int main(){
    float nota1, nota2;

    cout << "Nota 1: ";
    cin >> nota1;

    cout << "Nota 2: ";
    cin >> nota2;

    if (nota1 >= 0 && nota1 <= 10 ){

        if(nota2 >= 0 && nota2 <= 10){
            cout << "Media: " << (nota1 + nota2) / 2 << endl;
        }
        else {
            cout << "Nota 2 invalida" << endl;
        }
    }
    else {
        cout << "Nota 1 invalida" << endl;
    }

    return 0;
}