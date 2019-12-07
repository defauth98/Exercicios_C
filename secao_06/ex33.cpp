#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    int n, i, j, c=1, count=0;

    cout << "N: ";
    cin >> n;

    cout << "I: ";
    cin >> i;

    cout << "J: ";
    cin >> j;

    while(true){
        if((c % i == 0)||(c % j == 0)){
            cout << c << " ";
            count++;
        }
        if(count == n)
            break;

        c++;
    }

    cout << endl;
    return 0;
}