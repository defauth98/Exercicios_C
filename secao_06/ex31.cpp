#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    float S, deno = 1;

    for (int c = 1; c <= 99; c++){
        if(c % 2 != 0){
            cout << c << "/" << deno;
            cout << "= " << S << endl;
            S = c / deno;
            deno++;
        }
    }

    cout << "Valor de S -> " << S << endl;

    return 0;
}