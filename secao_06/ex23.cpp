#include <iostream>

using namespace std;

int main(){
    int num, c = 1;

    cout << "Número: ";
    cin >> num;

    cout << "Divisores de " << num << ": ";
    while(c <= num){
        if(num % c == 0){
            cout << c << " ";
        }
        c++;
    }

    cout << endl;

    return 0;
}