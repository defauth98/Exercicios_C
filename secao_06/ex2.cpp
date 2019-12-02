#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    
    cout << "FOR ->";
    for (int i = 0; i <= 100; i++)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "WHILE -> ";
    int i=1;
    while(i <= 100){
        cout << i << " ";
        i++;
    }
    cout << endl;

    cout << "DO WHILE ->";
    i = 1;
    do{
        cout << i << " ";
        i++;
    }while(i <= 100);
    cout << endl;

    return 0;
}