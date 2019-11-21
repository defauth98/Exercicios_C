#include <iostream>

using namespace std;

int main(){
    float A, B, C;

    cout << "Valor de A: ";
    cin >> A;

    cout << "Valor de B: ";
    cin >> B;

    cout << "Valor de C: ";
    cin >> C;


    if (A < (B + C) && B < (A + C) && C < (B+A)){
        cout << "É um tringulo -> ";

        if (A != B && B != C && C != A){
        cout << "triângulo escaleno" << endl;
        }
        else if(A == B && B == C && C == A){
            cout << "triãngulo equilátero" << endl;
        }
        else if (A == B || B == C || C == A){
            cout << "triãngulo isóceles" << endl;
        }
    }
}