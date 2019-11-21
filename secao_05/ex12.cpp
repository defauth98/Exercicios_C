#include <iostream>
#include <math.h>
#include <locale.h>

using namespace std;

int main(){
    
    setlocale(LC_ALL, "Portuguese");

    int num;

    cout << "Número: ";
    cin >> num;

    if (num > 0) {
        cout << "Logaritmo em base 2: " << log(num) << endl;
    }
    else{
        cout << "Número invalido" << endl;
    }

    return 0;
}