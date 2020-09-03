#include<math.h>
#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    int n;

    while(cin >> n){

        if(n==1){
            cout << "0\n";
        }
        else{
            cout << log2(n) << endl;
        }
    }
    return 0;
}
