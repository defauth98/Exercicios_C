#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    int num,num1,num2;

    cout << "Numero: ";
    cin >> num;

    num1 = num;
    cout << (num1 / 100) % 10 << " ";
    
    num2 = num;
    cout << (num2 / 10) % 10 << " ";

    cout << num % 10 << endl;

    return 0;
}