#include<iostream>
#include<iomanip>

using namespace std;


int main(){
    double N, r = 0.0;

    cin >> N;

    while(N--){
        r += 2.0;
        r = 1.0/r;
    }
    r += 1.0;
    cout << fixed << setprecision(10);
    cout << r << endl;

    return 0;
}



