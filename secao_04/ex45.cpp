#include <iostream>

using namespace std;

int main(){
    char letra;

    cout << "Letra: ";
    cin >> letra;

    letra = toupper(letra);
    
    cout << letra << endl; 

    return 0;
}