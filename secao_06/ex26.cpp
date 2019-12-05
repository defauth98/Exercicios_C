#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    int num;

    cout << "Numero: ";
    cin >> num;

    while (true){
        if(num % 11 == 0){
            cout << "Primeiro multiplo de 11 -> " << num << endl;
            break;
        }
        else if(num % 13 == 0){
            cout << "Primeiro multiplo de 13 -> " << num << endl;
            break;
        }
        else if(num % 17 == 0){
            cout << "Primeiro multiplo de 17 -> " << num << endl;
            break;
        }
        num++;
    }
    return 0;
}