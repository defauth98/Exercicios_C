#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    int num,soma=0;

    cout << "Numero inteiro: ";
    cin >> num;

    if (num > 0){
        while( num > 0){
            soma = soma + (num % 10);

            num = num / 10;
        }
        cout << "Soma: " << soma << endl;
    }
    else{
        cout << "Número invalido" << endl;
    }

    return 0;
}
