#include <iostream>

using namespace std;

int main(){
    int num1, num2;

    cout << "Numero 1: ";
    cin >> num1;

    cout << "Numero 2: ";
    cin >> num2;

    if (num1 > num2){
        cout << "O " << num1 << " e o maior" << endl;
    }
    else{
        cout << "O " << num2 << " e o maior" << endl; 
    }

    return 0;
}