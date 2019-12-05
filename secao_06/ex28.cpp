#include <iostream>

using namespace std;

 int fatoral(int num){
     int fatoral = 1.0;

     for(num; num >= 1; num--){
         fatoral*=num;
    }

     return fatoral;
 }

int main(int argc, char *argv[]){
    int num; 
    float E=1;

    cout << "Número: ";
    cin >> num;
    
    for (int i=1.0 ; i <= num;i++){
        E+=(1.0/fatoral(i));
        cout << "Estado de E atualmento dentro do laço:" << E << endl;
    }

    cout << "E -> " << E << endl;

    return 0;
}