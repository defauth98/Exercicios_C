#include <iostream>

using namespace std;

int main(int argc, char *argv[]){

    int num[10], c=0, maior, menor;

    while(c <= 9){
        cout << "Numero " << c+1 << ": ";
        cin >> num[c];
        c++;
    }
    //For para saber qual é o maior
    c = 0;
    menor = num[c];
    maior = num[c];
    for(int c=0; c <= 9;c++){
        if( num[c] < menor){
            menor = num[c];
        }
        else if (num[c] > maior){
            maior = num[c];
        }
    }

    
    cout << endl;
    cout << "Menor: " << menor << endl;
    cout << "Maior: " << maior << endl;
    return 0;
}