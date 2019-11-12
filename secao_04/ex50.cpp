#include <iostream>

using namespace std;

int main(){
    int idade, ano_atual;

    cout << "Idade: ";
    cin >> idade;

    cout << "Ano atual: ";
    cin >> ano_atual;

    cout << "Ano de nascimento: " << ano_atual - idade << endl;
    
    return 0;
}