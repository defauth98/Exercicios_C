#include <iostream>

using namespace std;

int main(){
    int secs, horas, minutos, segundos;

    cout << "Digite o valor em segundos: ";
    cin >> secs;

    if ( secs % 3600 == 0) {
        cout << "Horas: " << secs / 3600;
    } 
    else {
        cout << "Horas: " << secs / 3600 << endl;

        cout << "Minutos: " << (secs % 3600) / 60 << endl;

        cout << "Segundos: " << secs % 3600 % 60 << endl;
    }

    
    return 0;
}