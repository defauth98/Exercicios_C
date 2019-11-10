#include <iostream>
#include <math.h>

using namespace std;

int main(){
    float cat_a, cat_b, hipo;

    cout << "Cateto A: ";
    cin >> cat_a;

    cout << "Cateto B: ";
    cin >> cat_b;

    hipo = (cat_a * cat_a) + (cat_b * cat_b);
    
    cout << "Hipotenusa: " << sqrt(hipo) << endl;

    return 0;
}