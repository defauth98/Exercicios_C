#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    int num, c = 1, soma=0;

    cout << "Número: ";
    cin >> num;

    cout << "Divisores de " << num << ": ";
    while(c <= num){
        if(num % c == 0){
            cout << c << " ";
            soma+=c;
        }
        c++;
    }
    cout << endl;

    cout << "Soma dos divisores desse numero: "<< soma <<endl;
    return 0;
}