#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    float altura_chico = 1.50, altura_ze = 1.10, anos = 0;

    while(true){
        altura_chico+=0.02;
        altura_ze+=0.03;

        anos++;

        if(altura_ze > altura_chico)
            break;
    }

    cout << "Quantidade de anos -> " << anos << endl;
    return 0;
}