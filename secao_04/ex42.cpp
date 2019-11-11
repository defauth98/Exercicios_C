#include <iostream>

using namespace std;

int main(){
    float salario_base;

    cout << "Salario base: ";
    cin >> salario_base;

    cout << "Salario atual: " << salario_base - ( salario_base * 7 / 100) + (salario_base * 5 / 100) << endl;
    
    return 0;
}