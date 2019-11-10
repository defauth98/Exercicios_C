#include <iostream>

using namespace std;

int main(){
    float metros;

    cout << "Metros quadrados: ";
    cin >> metros;

    cout << "Hectares: " << metros * 0.0001 << endl;
    
    return 0;
}