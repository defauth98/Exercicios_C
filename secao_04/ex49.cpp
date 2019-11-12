#include <iostream>

using namespace std;

int main(){
    int horas,minutos,segs,duracao,segs_atual,segs_final;

    cout << "Horas: ";
    cin >> horas;

    cout << "Minutos: ";
    cin >> minutos;

    cout << "Segundos: ";
    cin >> segs;

    cout << "Duracao (em segundos): ";
    cin >> duracao;

    segs_atual = (horas * 3600) + (minutos * 60) + segs;

    segs_final = segs_atual + duracao;

    cout << "Horas: " << segs_final / 3600 << endl;

    cout << "Minutos: " << (segs_final % 3600) / 60 << endl;

    cout << "Segundos: " << segs_final % 3600 % 60 << endl;

    return 0;
}