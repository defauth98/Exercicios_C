#include <iostream>

using namespace std;

int main(){
    float salario, reajuste = 0, tempo_servico;

    cout << "Salario atual: ";
    cin >> salario;

    cout << "Tempo de servico: ";
    cin >> tempo_servico;

    if ( (salario <= 500) && (tempo_servico > 1)){
        reajuste = salario + (salario * 25 / 100);
    }
    else if ( ((salario > 500) && (salario <= 1000)) && ((tempo_servico > 1) && (tempo_servico <= 3))){
        reajuste = salario + (salario * 20 / 100) + 100;
    }
    else if ( ((salario > 1000) && (salario <= 1500)) && ((tempo_servico >= 4) && (tempo_servico <= 6))){
        reajuste = salario + (salario * 15 / 100) + 200;
    }
    else if ( ((salario > 1500) && (salario <= 2000)) && ((tempo_servico >= 7) && (tempo_servico <= 10))){
        reajuste = salario + (salario * 10 / 100) + 300;
    }
    else if ( (salario > 2000)  && (tempo_servico > 10)) {
        reajuste = salario + 500;
    }
    else {
        cout << "Nenhum aumento!" << endl;
    }

    if (reajuste > 0){
        cout << "Valor do salario apos reajuste -> " << reajuste << endl;
    }

    return 0;
}