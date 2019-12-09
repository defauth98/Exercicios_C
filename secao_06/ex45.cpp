#include <iostream>

using namespace std;

int menu(){
    int opc;
    cout << " 1 - km para ms " << endl;
    cout << " 2 - ms para km " << endl;
    cout << " 3 - sair" << endl;
    cout << " Opção: ";
    cin >> opc;

    return opc;
}

int main(int argc, char *argv[]){
    float km, ms;
    int opc ;

    while(true){
        opc = menu();

        if(opc == 1){
        cout << "km:";
        cin  >> km;

        ms = km / 3.6;

        cout << "ms -> " << ms << endl << endl;
        } 
        else if(opc == 2){
            cout << "ms:";
            cin  >> ms;

            km = ms * 3.6;

            cout << "ms -> " << ms << endl << endl;
        }
        else if(opc == 3){
            return 0;
        }
    }
}