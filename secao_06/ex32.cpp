#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[]){
    int vezes;
    int d1, d2;
    char resultado[10];
    cout << "Quantidade de vezes que os dados serão jogados: ";
    cin >> vezes;

    for(int i = 1; i <= vezes; i++){
        d1 = rand() % 10;
        d2 = rand() % 10;
        cout << "Jogada número " << i << ":" << endl;
        cout << "D1 -> " << d1 << endl;
        cout << "D2 -> " << d2 << endl << endl;

        if(d1 > d2){
            cout << "D1 " << ">" << " D2" << endl;
        }
        else if(d1 < d2){
            cout << "D1 " << "<" << " D2" << endl;
        }
        else if(d1 == d2){
             cout << "D1 " << "=" << " D2" << endl;
        }
    }
    return 0;
}