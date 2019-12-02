#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    int num, c=0;

    cout << "Numero: ";
    cin >> num;
    
    while( num > 0){
        if((c % 2) != 0){
            cout << c << endl;
            num --;
        }
        c++;
    }
    return 0;
}