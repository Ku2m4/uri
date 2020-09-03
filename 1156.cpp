#include<iostream>
#include<iomanip>
#include<stdio.h>

using namespace std;

int main()
{
    double a, b=1, c, soma=0;

    for(int a=1; a<=39; a+=2){
        c=a/b;
        soma+=c;
        b*=2;
    }
    cout << fixed << setprecision(2) << soma << endl;
    return 0;
}
