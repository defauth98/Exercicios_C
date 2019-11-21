#include <iostream>

using namespace std;

int main (){
    float nota1, nota2, nota3, media;

    cout << "Nota 1: ";
    cin >> nota1;

    cout << "Nota 2: ";
    cin >> nota2;

    cout << "Nota 3: ";
    cin >> nota3;

    media = (nota1 + nota2  + nota3 * 2)/(1 + 1 + 2);

    if ( media >= 0 && media <= 2.9 ){
        cout << "Sua media foi de " << media << " você está reprovado!" << endl;
    }
    else if (media >= 3 && media <= 4.9){
        cout << "Sua media foi de " << media << " você está de recuperação!" << endl;
    }
    else{
        cout << "Sua media foi de " << media << " vocẽ está aprovado" << endl;
    }

    return 0;
}