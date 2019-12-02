#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    int num;

    cout << "Número: ";
    cin >> num;

    for (int i = num; i >= 0; i--){
        if(i % 2 != 0)
            cout << i << endl;
    }

    return 0;
}