#include<iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int vet[n];

    int c2=0, c3=0, c4=0, c5=0;

    for(int i=0; i<n; i++){
        cin >> vet[i];

        if(vet[i]%2==0) c2++;

        if(vet[i]%3==0) c3++;

        if(vet[i]%4==0) c4++;

        if(vet[i]%5==0) c5++;
    }

    cout << c2 << " Multiplo(s) de 2" << endl;
    cout << c3 << " Multiplo(s) de 3" << endl;
    cout << c4 << " Multiplo(s) de 4" << endl;
    cout << c5 << " Multiplo(s) de 5" << endl;
    return 0;
}
