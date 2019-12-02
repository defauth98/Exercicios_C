#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    int i=0, c=50;

    while(c >= 0){
        if(i % 2 == 0){
            cout << i << endl;
            c--;
        }
        i++;
    }
    
    return 0;
}