#include <iostream>

using namespace std;

int main(){
    float nota;
    int faltas;

    cout << "Nota: ";
    cin >> nota;

    cout << "Faltas: ";
    cin >> faltas;

    if ((nota >= 9.0) && (nota <= 10 )){
        if (faltas <= 20){
            cout << "Conceito A" << endl;
        }
        else{
            cout << "Conceito B" << endl;
        }
    }
    else if ((nota >= 7.5) && (nota <= 8.9 )){
        if (faltas <= 20){
            cout << "Conceito B" << endl;
        }
        else{
            cout << "Conceito C" << endl;
        }
    }
    else if ((nota >= 5.0) && (nota <= 7.4 )){
        if (faltas <= 20){
            cout << "Conceito C" << endl;
        }
        else{
            cout << "Conceito D" << endl;
        }
    }
    else if ((nota >= 4.0) && (nota <=4.9)){
        if (faltas <= 20){
            cout << "Conceito D" << endl;
        }
        else{
            cout << "Conceito E" << endl;
        }
    }
    else{
        cout << "Conceito E" << endl;
    }
    return 0;
}