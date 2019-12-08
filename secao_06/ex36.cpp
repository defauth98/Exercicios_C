#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    int soma_dos_quadrados = 0, quadrado_da_soma=0;
    float resultado;

    for(int i = 1; i <= 100; i++){
        soma_dos_quadrados+=( i * i );
    }

    for(int i =1; i <= 100; i++){
        quadrado_da_soma+=i;
    }

    quadrado_da_soma*=quadrado_da_soma;

    cout << "Soma dos quadrados -> " << soma_dos_quadrados << endl;

    cout << "Quadrados dos cem primeiros -> " << quadrado_da_soma << endl;

    resultado = quadrado_da_soma - soma_dos_quadrados;

    cout << "Resultado -> " << resultado << endl;

    return 0;
}
