#include <iostream>

using namespace std;

float fatoral(int num){
    float fatoral = 1.0;

    for(num; num >= 1; num--){
         fatoral*=num;
    }

    return fatoral;
}

int main(int argc, char *argv[]){
    float S = 0;
    
    for (float i = 1; i <= 5; i++){
        S += (i / fatoral(i+i));
    }

    cout << "S -> " << S << endl;
    return 0;
}