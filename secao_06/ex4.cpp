#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    int num = 0;
    
    for (int i; num <= 100000; i++){
        cout << num << endl;
        num+=1000;
    }

    return 0;
}