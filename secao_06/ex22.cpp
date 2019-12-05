#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    float nota;
    int soma, quant = 0;

    while(true){
        cout << "Nota: ";
        cin >> nota;

        if((nota >= 10)&&(nota <=20)){
            soma+=nota;
            quant++;
        }
        else{
            break;
        }
    }

    cout << "Media -> " << soma / quant << endl;

    cout << "Quantidade de notas lidas -> " << quant << endl;
    
    return 0;
}