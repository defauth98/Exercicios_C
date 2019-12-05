#include <iostream>

using namespace std;

void maior_numero(int quant){
    int vetor[quant], maior, vez_maior=0;

    for(int c = 1; c <= quant ;c++){
        cout << "Numero: ";
        cin >> vetor[c];
    }

    maior = vetor[0];
    for (int c=0; c <= quant; c++){
        if (vetor[c] > maior){
            maior = vetor[c];
        }
    }

    cout << "O maior número é: " << maior << endl;

    for (int j = 0; j <= quant; j++){
        if (vetor[j] == maior)
            vez_maior++;
    }

    cout << "A quantidade de vezes em que o maior número foi lido: " << vez_maior << endl;

}

int main(int argc, char *argv[]){
    int quant;

    cout << "Quantidade de números: ";
    cin >> quant;

    maior_numero(quant);

    return 0;
}