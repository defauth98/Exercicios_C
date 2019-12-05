#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    int num;
    float h=1;

    cout << "Numero: ";
    cin >> num;

    if(num < 0){
       return 0;
    } 

    for(int i=1; i < num; i++){
        h += (1/i);
    }

    cout << "Número harmonico -> " << h << endl;

    return 0;
}