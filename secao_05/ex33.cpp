#include <iostream>

using namespace std;

int main (){
    float preco, preco_novo;

    cout << "Preço: ";
    cin >> preco;

    if (preco < 50){
        preco_novo = preco + ( preco * 5 / 100);
    }
    else if ((preco >= 50) && (preco <= 100)){
        preco_novo = preco + (preco * 10 / 100);
    }
    else if (preco > 100){
        preco_novo = preco + (preco * 15 / 100);
    }
    
    cout << "Preço novo -> " << preco_novo << endl;

    if (preco_novo < 80 ) {
        cout << endl << "Barato!!" << endl;
    }
    else if((preco_novo >= 80) && (preco_novo <= 120)){
        cout << endl << "Normal" << endl;
    }
    else if((preco_novo > 120 ) && (preco_novo <= 200)){
        cout << endl << "Caro" << endl;
    }
    else{
        cout << endl << "Muito caro!!!" << endl;
    }
    
    return 0;
}