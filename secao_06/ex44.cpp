#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    int num, fibonnaci = 0 , antecessor =0, sucessor =1, count;

    cout << "Número -> ";
    cin >> num;

    while (true){
        
        fibonnaci = antecessor + sucessor;
        cout << fibonnaci << " ";

        if(fibonnaci > num)
            break;

        antecessor = sucessor;
        sucessor = fibonnaci;

    }

    cout << endl;
    
    return 0;
}