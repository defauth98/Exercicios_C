#include <iostream>

using namespace std;

int main(){
    float valor_hrs;
    int num_hrs;

    cout << "Valor das horas: ";
    cin >> valor_hrs;


    cout << "Numero de horas: ";
    cin >> num_hrs;

    cout << "Valor a ser pago: " << ((num_hrs * valor_hrs) * 10 / 100) + num_hrs * valor_hrs << endl;
    return 0;
}