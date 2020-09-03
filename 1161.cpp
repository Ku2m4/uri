#include<iostream>

using namespace std;

int main()
{
    long long int m, n;

    while(cin >> n >> m){
      long long int f1=1, f2=1;

        for(int i=1; i<=n; i++){
            f1 = f1*i;
        }
        for(int j=1; j<=m; j++){
            f2 = f2*j;
        }
        cout << f1+f2 << endl;
    }
    return 0;
}
