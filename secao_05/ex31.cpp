#include <iostream>

using namespace std;

int main(){
    float altura, peso;

    cout << "Altura: ";
    cin >> altura;

    cout << "Peso: ";
    cin >> peso;

    if (altura < 1.20){
        if(peso <= 60){
            cout << "Categoria A" << endl;
        }
        else if(peso >= 60 && peso < 90 ){
            cout << "Categoria D" << endl;
        }
        else{
            cout << "Categoria G" << endl;
        }
    }
    else if(altura >= 1.20 && altura < 1.70){
        if(peso <= 60){
            cout << "Categoria B" << endl;
        }
        else if(peso >= 60 && peso < 90 ){
            cout << "Categoria E" << endl;
        }
        else{
            cout << "Categoria H" << endl;
        }
    }
    else{
        if(peso <= 60){
            cout << "Categoria C" << endl;
        }
        else if(peso >= 60 && peso < 90 ){
            cout << "Categoria F" << endl;
        }
        else{
            cout << "Categoria I" << endl;
        }
    }

    return 0;
}