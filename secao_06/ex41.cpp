#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    float r1, r2;

    cout << "R1: ";
    cin >> r1;

    cout << "R2: ";
    cin >> r2;

    cout << "Associação em parelo -> " << (r1 * r2) / (r1 + r2) << endl;
    
    return 0;
}