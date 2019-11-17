#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    float salario, prestacao;

    cout << "Salario: ";
    cin >> salario;

    cout << "Valor da prestacao: ";
    cin >> prestacao;

    if ((prestacao * 100 / salario) > 20) {
        cout << "Empréstimo não concedido" << endl;
    }
    else {
        cout << "Empréstimo concedido" << endl;
    }

    return 0;
}