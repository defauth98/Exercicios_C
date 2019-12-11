#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    float fibonacci = 0, ante = 0, suce = 1, soma =0;

    while(fibonacci < 4000000){
        fibonacci = ante + suce;
        ante = suce;
        suce = fibonacci;

        soma+=fibonacci;
    }   

    cout << "Soma -> " << soma << endl;
    return 0;
}