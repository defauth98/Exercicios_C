#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    int soma = 0, count = 0, idade;

    while(true){
        cout << "Idade: ";
        cin >> idade;

        if (idade == 0)
            break;
        
        soma+=idade;
        count++;
    }

    cout << "Media das idade -> " << soma / count << endl;
    
    return 0;
}