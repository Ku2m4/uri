#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    char n;
    int cont = 0;
    double soma=0.0, m[12][12];

    cin >> n;

        for(int i=0; i<12; i++){
            for(int j=0; j<12; j++){
                cin >> m[i][j];
                if(j>(11-i) && j>i){
                  soma+=m[i][j];
                  cont+=1;
                }
            }
        }
    if(n=='S')
        cout << fixed << setprecision(1) << soma << endl;
    else if(n=='M')
        cout << fixed << setprecision(1) << (soma/cont) << endl;

    return 0;
}

