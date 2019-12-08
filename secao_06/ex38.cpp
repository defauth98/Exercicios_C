#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    int a,b,c;

    cout << "A -> ";
    cin >> a;

    cout << "B -> ";
    cin >> b;

    cout << "C -> ";
    cin >> c;

    if(((a *a)+(b*b))==(c*c)){
        cout << "O conjunto é um terno pitagórico." << endl;
    }
    else{
        cout << "O conjunto não é um terno pitagórico." << endl;
    }

    return 0;
}