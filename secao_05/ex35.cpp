#include <iostream>

using namespace std;

int main(){
    int dia,mes,ano;

    cout << "Dia: ";
    cin >> dia;

    cout << "Mes: ";
    cin >> mes;

    cout << "Ano: ";
    cin >> ano;

    if( (mes <= 12) && (mes >= 1)){
        if (ano % 400 == 0){
            if (dia <= 29){
                //ano bisexto
            }
            else{
                cout << "Data invalida! " << endl;
            }
        }
        else{
            if((dia >=1) && (dia <= 12)){
                cout << "Data válida" << endl;
            }
        }
    }
    else{
        cout  << "Data inválida" << endl;
    }
    return 0;
}