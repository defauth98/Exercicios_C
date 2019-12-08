#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
   for(int i = 1000; i <= 9999; i++){
       int inicial = i / 100;
       int final = i % 100;

       if((inicial + final)*(inicial + final) == i){
           cout << i << endl;
       }
   }

    return 0;
}