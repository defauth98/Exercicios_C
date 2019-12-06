#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    int n,sec1 = 1,sec2 = 1,sec3 = 1;

    cout << "Valor de N: ";
    cin >> n;

    for(int c = 1 ; c <= n; c++)
        sec1 += c;
    
    cout << "Primeira sequência -> " << sec1 << endl;

    for(int c = 1; c <= n ; c++){
        sec2 += (2 * n -1);
    }

    cout << "Segunda sequência -> " << sec2 << endl;

    return 0;
}