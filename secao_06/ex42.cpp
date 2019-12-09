#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[]){
    int num;
    
    while(true){
        cout << "Número: ";
        cin >> num;

        if (num <= 0)
            break;

        cout << "Quadrado -> " << num * num << endl;

        cout << "Cubo -> " << num * num * num << endl;

        cout << "Raiz quadrada -> " << sqrt(num) << endl << endl;
    }
    return 0;
}