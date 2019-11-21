#include <iostream>

using namespace std;

int main(){
    int num;

    cout << "Numero: ";
    cin >> num;

    switch(num){
        case 1:
            cout << "Hoje é segunda-feira" << endl;
            break;
        case 2:
            cout << "Hoje é terça-feira" << endl;
            break;
        case 3:
            cout << "Hoje é quarta-feira" << endl;
            break;
        case 4:
            cout << "Hoje é sexta-feira" << endl;
            break;
        case 5:
            cout << "Hoje é sábado" << endl;
            break;
        case 6:
            cout << "Hoje é domingo" << endl;
            break;
        case 7:
            cout << "Hoje é segunda-feira" << endl;
            break;
        default:
            cout << "Número inválido!" << endl;
    }
    return 0;
}