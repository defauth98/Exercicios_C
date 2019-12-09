#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    int maior = 1, menor = 1, c;

    while(true){
        cout << "Número -> ";
        cin >> c;

        if (c <= 0 ){
            break;
        }

        if(c > maior){
            maior = c;
        }
        else{
            menor = c;
        }
    }

    cout << "Maior número lido -> " << maior << endl;
    cout << "Menor número lido -> " << menor << endl;
    return 0;
}