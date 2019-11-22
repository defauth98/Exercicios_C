#include <iostream>

using namespace std;

int main(){
    int num1, num2, num3;

    cout << "Numero 1: ";
    cin >> num1;

    cout << "Numero 2: ";
    cin >> num2;

    cout << "Numero 3: ";
    cin >> num3;

    cout << endl;

    if ((num1 < num2) && (num2 < num3)){
        cout << num1 << " -> " << num2 << " -> " << num3 << endl;
    }
    else if((num1 < num2) && (num2 > num3)){
        cout << num1 << " -> " << num3 << " -> " << num2 << endl;
    }
    else if((num2 < num1) && (num1 < num3)){
        cout << num2 << " -> " << num1 << " -> " << num3 << endl;
    }
    else if((num2 < num3) && (num1 > num3)){
        cout << num2 << " -> " << num3 << " -> " << num1 << endl;
    }
    else if((num3 < num1) && (num1 < num2)){
        cout << num3 << " -> " << num1 << " -> " << num2 << endl;
    }
    else{
         cout << num3 << " -> " << num2 << " -> " << num1 << endl;
    }
    return 0;
}