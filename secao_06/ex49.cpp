#include <iostream>

using namespace std;

#define TAXA_JOAO 5
#define TAXA_CARLOS 2

int main(int argc, char *argv[]){
    float salario_joao, salario_carlos, rend_carlos = 0, rend_joao = 0, meses = 0, total_joao = 0, total_carlos = 0;

    cout << "Salário do carlos: ";
    cin >> salario_carlos;

    salario_joao = salario_carlos / 3;

    cout << "Salário do João -> " << salario_joao << endl;

    total_carlos += salario_carlos;
    total_joao += salario_joao;

    while(true){
        
        rend_joao = total_joao * TAXA_JOAO / 100;
        rend_carlos = total_carlos * TAXA_CARLOS / 100;

        total_carlos += rend_carlos;
        total_joao+=rend_joao;

        // cout << "Total carlos -> " << total_carlos << endl;
        // cout << "Total João -> " << total_joao << endl;

        cout << endl << endl;

        if(total_joao > total_carlos)
            break;
        else
            meses++;
    }
    
    cout << "Total de meses -> " << meses << endl;

    return 0;
}