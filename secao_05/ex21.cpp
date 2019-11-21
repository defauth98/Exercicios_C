#include <iostream>

using namespace std;

int main(){
    int opc;
    float num1,num2;

    cout << "Escolha a opção:" << endl;
    cout << "1 - Soma de 2 números." << endl;
    cout << "2 - Diferença entre 2 números (maior pelo menor)." << endl;
    cout << "3 - Prduto entre 2 números." << endl;
    cout << "4 - Divisão entre 2 números (o denominador não pode ser zero)." << endl;
    
    cout << "Opção: ";
    cin >> opc;
    
    cout << "Numero 1: ";
    cin >> num1;

    cout << "Numero 2: ";
    cin >> num2;

    switch(opc){
        case 1:
            cout << "Resultado -> " << num1 + num2 << endl;

            break;
        case 2:
            if (num1 > num2){
                cout << "Resultado -> " << num1 - num2 << endl;
            }
            else{
                cout << "Resultado ->" << num2 - num1 << endl;
            }

            break;
        case 3:
            cout << "Resultado -> " << num1 * num2 << endl;

            break;
        case 4:
            if (num2 == 0){
                cout << "Denominado igual a zero." << endl;
            }
            cout << "Resultado -> " << num1 / num2 << endl;

            break;
        default:
            cout << "Opção inválida!" << endl;

            break;
    }

    return 0;
}