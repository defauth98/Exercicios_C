#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    int v_ini, v_fim, soma = 0;

    cout << "Valor inicial: ";
    cin >> v_ini;

    cout << "Valor final: ";
    cin >> v_fim;

    if (v_fim < v_ini){
        cout << "Intervalo dos valores inválido" << endl;
        return 0;
    }

    for(v_ini; v_ini <= v_fim; v_ini++){
        if(v_ini % 2 != 0){
            soma+=v_ini;
        }
    }

    cout << "Soma dos impares nesse intervalo: " << soma << endl;

    return 0;
}