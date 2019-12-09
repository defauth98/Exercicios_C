#include <iostream>
#include <stdlib.h>
#include<time.h>

using namespace std;

int main()
{
    int num = 0, tentativa, count =0 ;
    srand(time(NULL));
    num=rand()%1000+1;
    
    while(true){
        cout << "Qual é o numero? ";
        cin >> tentativa;

        if(tentativa == num){
            cout << "Voce acertou!!!" << endl;
            break;
        }
        else if(tentativa > num){
            cout << "Tente novamente. O número digitado foi MAIOR que o escolhido!" << endl;
        }
        else{
            cout << "Tente novamente. O número digitado foi MENOR que o escolhido!" << endl;
        }

        count++;
    }

    cout << "Quantidade de tentativas -> " << count << endl;
}