#include <iostream>

using namespace std;

int main(){
    int num;

    cout << "Numero: ";
    cin >> num;

    if(num % 3 == 0 && num % 5 == 0){
        cout << "Divisível por 3 e por 5" << endl;
    }
    else if (num % 3 == 0){
        cout << "Numero divisível por 3" << endl;
    }
    else if (num % 5 == 0){
        cout << "Numero divísível por 5" << endl;
    }
    else{
        cout << "Esse número não é divisível nem por 3 ou por 5" << endl;
    }

    return 0;
}