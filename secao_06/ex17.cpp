#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    int num,soma=0;

    cout << "Numero: ";
    cin >> num;

    for (int c=0; c <= num; c++){
        soma+=c;
    }

    cout << "Soma: " << soma << endl;

    return 0;
}