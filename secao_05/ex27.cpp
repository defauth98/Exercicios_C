#include <iostream>

using namespace std;

int main (){
    int idade;

    cout << "Idade: ";
    cin >> idade;

    if (idade >= 5 && idade <= 7){
        cout << "Infantil A" << endl;
    }
    else if(idade >= 8 && idade <= 10){
        cout << "Infantil B" << endl;
    }
    else if(idade >= 11 && idade <= 13){
        cout << "Juvenil A" << endl;
    }
    else if(idade >= 14 && idade <= 17){
        cout << "Juvenil B" << endl;
    }
    else if( idade >= 18){
        cout << "Sênior" << endl;
    }

    return 0;
}