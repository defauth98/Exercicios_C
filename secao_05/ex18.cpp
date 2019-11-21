#include <iostream>

using namespace std;

int main (){
    int opc, num1, num2;

    cout << "1 - Adição" << endl;
    cout << "2 - Subtração" << endl;
    cout << "3 - Multiplicação" << endl;
    cout << "4 - Divisão" << endl << endl;

    cout << "Sua opção -> ";
    cin >> opc;

    cout << endl;

    cout << "Numero 1: ";
    cin >> num1;

    cout << "Numero 2: ";
    cin >> num2;

    switch(opc){
        case 1:
            cout << "Resultado -> " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Resultado -> " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Resultado -> " << num1 * num2 << endl;
            break;
        case 4:
            cout << "Resultado -> " << num1 / num2 << endl;
            break;
        default:
            cout << "Opção inválida!" << endl;
            break;
    }
}