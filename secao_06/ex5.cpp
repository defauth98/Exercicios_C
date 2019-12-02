#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    int num[10], c=0,soma=0;

    while(c <= 9){
        cout << "Numero " << c+1 << ": ";
        cin >> num[c];
        c++;
    }

    for(int i=0; i <= 9; i++){
        soma+=num[i];
    }

    cout << "Soma: " << soma << endl;

    return 0;
}