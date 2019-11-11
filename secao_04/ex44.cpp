#include <iostream>

using namespace std;

int main(){
    float altura_degrau, altura_usu;

    cout << "Altura do degrau: "; cin >> altura_degrau;

    cout << "Altura que deseja chegar: "; cin >> altura_usu;

    cout << "Numero de degrais necessarios -> " << altura_usu / altura_degrau << endl;
    
    return 0;
}