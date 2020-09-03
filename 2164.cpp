#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){

    double n, aux, r1, r2;

    cin >> n;

    cout << fixed << setprecision(1) << ((pow(((1.0 + (sqrt(5.0)))/2.0), n))-(pow(((1 - (sqrt(5.0)))/2.0), n)))/(sqrt(5.0)) << endl;

    return 0;
}