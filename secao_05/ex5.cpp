#include <iostream>

using namespace std;

int main(){
    int num;

    cout << "Numero: ";
    cin >> num;

    if ( num % 2 == 0){
        cout << "O numero digitado e par" << endl;
    }
    else {
        cout << "O numero digitado e impar" << endl;
    }
    
    return 0;
}