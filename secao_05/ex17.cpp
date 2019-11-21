#include <iostream>

using namespace std;

int main(){
    float base_menor, base_maior, altura;

    cout << "Base maior: ";
    cin >> base_maior;

    cout << "Base menor: ";
    cin >> base_menor;

    cout << "Altura: ";
    cin >> altura;

    if (base_maior > 0 && base_menor > 0) {
        cout << "Area do trapészio: " << ((base_menor + base_maior) * altura) / 2 << endl;
    }
    else{
        cout << "Números de base inválidos!" << endl;
    }

    return 0;
}