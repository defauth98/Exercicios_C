#include <iostream>

using namespace std;

int main(){
    int num_primo, count = 1, result_primo;
    cout << "Número: ";
    cin >> num_primo;

    while(count <= num_primo){
        //Testa o resultado da divisão inteira
        if(num_primo % count == 0){
            //Verifica se é um numero primo (Se é divisivel apenas por 1 ou ele mesmo)
            if(count == 1 || count == num_primo){
               result_primo = true;
            }
            else{
                result_primo = false;
            }
        }
        count++;
    }

    if(result_primo){
        cout << "Esse numero é um numero PRIMO" << endl;
    }
    else{
        cout << "Esse numero NÃO é um numero PRIMO" << endl;
    }

    return 0;
}