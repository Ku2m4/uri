#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int r, a, b;
    double c;

    while (cin >> a && a!=0){

        cin >> b >> c;

        r = sqrt((a * b * 100) / c);
        trunc(r);
        cout << r << endl;
    }

    return 0;

}