#include <iostream>

using namespace std;

int main(){
    int soma = 0;

    for (int i; i < 100; i++){
        if((i % 3 == 0) || (i % 5 == 0)){
            soma += i;
        }
    }

    cout << "Soma dos multiplos de 3 ou 5: "<< soma << endl;

    return 0;
}