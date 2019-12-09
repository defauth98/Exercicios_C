#include <iostream>

using namespace std;

int menu(){
    int opc;

    cout << "-------MENU------------" << endl;
    cout << "Opção 1 - Adição" << endl;
    cout << "Opção 2 - Subtração" << endl;
    cout << "opção 3 - Multiplicação" << endl;
    cout << "Opção 4 - Divisão" << endl;
    cout << "Opção 5 - Sair" << endl;
    cout << "-----------------------" << endl;

    cout << "Opção: ";
    cin >> opc;

    return opc; 
}

int main(int argc, char *argv[]){
    int escolha = 0;
    float valor1, valor2;
        
    while(true){
        escolha = menu();

        if(escolha == 5){
            cout << "Saindo do programa..." << endl;
            cout << "Tchau!!! :(" << endl;

            break;
        }

        cout << "-----------------------" << endl;

        cout << "Valor 1: ";
        cin >> valor1;

        cout << "Valor 2: ";
        cin >> valor2;

        switch(escolha){
            case 1:
                cout << "Calculando " << valor1 << " + " << valor2 << endl; 
                cout << "Resultado -> " << valor1 + valor2 << endl << endl;
                break;
            case 2:
                cout << "Calculando " << valor1 << " - " << valor2 << endl; 
                cout << "Resultado -> " << valor1 - valor2 << endl << endl;
                break;
            case 3:
                cout << "Calculando " << valor1 << " * " << valor2 << endl; 
                cout << "Resultado -> " << valor1 * valor2 << endl << endl;
                break;
            case 4:
                cout << "Calculando " << valor1 << " / " << valor2 << endl; 
                cout << "Resultado -> " << valor1 / valor2 << endl << endl;
                break;
            case 5:
                break;
            default:
                cout << "Você digitou uma opção invalida. Tente novamente!" << endl;
                break;
        }
    }
    return 0;
}