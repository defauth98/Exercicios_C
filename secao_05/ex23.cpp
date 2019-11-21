#include <iostream>

using namespace std;

int main(){
    int ano;

    cout << "Digite o ano: ";
    cin >> ano;

    if (ano % 400 == 0) {
        cout << "O ano de " << ano << " é bisexto" << endl;
    }
    else if (ano % 3 == 0 && ano % 100 == 0){
        cout << "O ano " << ano << " e divisível por 3 e não por 100, e por isso é bisexto." << endl;
    }
    else{
        cout << "Não é um ano bisexto." << endl;
    }
}