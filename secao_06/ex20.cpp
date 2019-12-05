#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    int num, quant=0;
    
    while(true){

        cout << "Numero: ";
        cin >> num;

        if(num % 2 == 0){
            cout << "Numero digitado é par." << endl;
        }
        else{
            cout << "Numero digitado é impar." << endl;
        }

        if(num == 1000)
            break;
        
        quant++;
    }

    cout << "Quantidade de numeros lidos: " << quant << endl;
    
    return 0;
}