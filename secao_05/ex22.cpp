#include <iostream>

using namespace std;

int main(){
    int idade, tempo_servico;

    cout << "Idade: ";
    cin >> idade;

    cout << "Tempo de serviço: ";
    cin >> tempo_servico;

    if (idade >= 65){
        cout << "Você ja tem mais de 65 anos, então pode se aposentar." << endl;
    }
    else if (tempo_servico >= 30){
        cout << "Voce ja tem mais de 30 anos de serviço, então pode se aposentar." << endl;
    }
    else if(idade >=60 && tempo_servico >= 35){
        cout << "Voce ja tem mais de 60 anos, e contem mais de 35 anos de serviço, então pode se aposentar." << endl;
    }

    
}