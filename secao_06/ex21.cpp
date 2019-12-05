#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    int num1, num2, soma=0;
    float multi=1;

    cout << "Número 1: ";
    cin >> num1;

    cout << "Número 2: ";
    cin >> num2;

    for (num1; num1 <= num2; num1++){
        if(num1 % 2 == 0){
            soma+=num1;
        }
        else{
            multi*=num1;
        }
    }

    cout << "Soma dos números pares no intervalo: " << soma << endl;
    cout << "Multiplicação dos números impares no intervalo: " << multi << endl;

    return 0;
}