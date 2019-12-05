#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    int num;

    cout << "Numero: ";
    cin >> num;

    for (int i; i < 3; i++){
        num/=10;

        cout << num % 10 << endl;
    }
    return 0;
}