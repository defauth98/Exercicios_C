#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    double salario = 2000, per_aumento = 1.5;

    for (int ano = 1996; ano <= 2019; ano++){
        
        salario = salario + (salario * per_aumento / 100);

        per_aumento = per_aumento + per_aumento;

        cout << salario << endl;
        cout << per_aumento << endl;
    }

    cout << "Salario em 2019 -> " << salario << endl;

    return 0;
}