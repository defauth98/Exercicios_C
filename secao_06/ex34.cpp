#include <iostream>

using namespace std;

bool verifica(int num){
    int soma = 0;
    for(int c=1; c <= 20; c++){
        if (num % c == 0)
            soma++;
    }
    
    if(soma == 10){
        cout << "Soma -> " << soma << endl;
        cout << "Numero -> " << num << endl;
        return true;
    }
        
    return false;
}

int main(int argc, char *argv[]){
    int i=1, soma=0;

    while(true){
        if (verifica(i) == true){
            cout << "Resultado de verifica -> " <<i << endl;
            break;
        }
        i++;
    }
    return 0;
}