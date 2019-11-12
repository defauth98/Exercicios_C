#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int x,y,distancia;

    cout << "X: ";
    cin >> x;

    cout << "Y: ";
    cin >> y;

    distancia = sqrt((x * x) + (y *y));

    cout << "Distancia: " << distancia << endl;

    return 0;
}